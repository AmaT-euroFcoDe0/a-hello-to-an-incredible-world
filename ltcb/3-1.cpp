/*lequobuu*/
#include<iostream>
#define ll long long

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    int n, sum{0};
    std::cin >> n;

    for(int i = 1; i <= n; ++i){
        sum += i;
    }
    std::cout << sum;

    return 0;
}
