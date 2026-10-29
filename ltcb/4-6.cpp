/*lequobuu*/
#include<iostream>
#define ll long long

bool check(int n);

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    int n;
    std::cin >> n;

    for(int i = 1; i <= n; ++i){
        if(check(i)){
            std::cout << i << " ";
        }
    }

    return 0;
}

bool check(int n){
    if(n < 2) return false;

    for(int i = 2; i <= n / i; ++i){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
