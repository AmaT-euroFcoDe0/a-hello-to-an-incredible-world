/*lequobuu*/
#include<iostream>
#include<cmath>
#define ll long long

int n, k, s{0};
int a[100];

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    std::cin >> n;

    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
        k = std::sqrt(a[i]);
        if(k * k == a[i]){
            s += a[i];
        }
    }
    std::cout << s;

    return 0;
}
