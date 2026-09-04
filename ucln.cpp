#include<iostream>
using ll = long long;

ll gcd(ll a, ll b);

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    ll a, b;
    std::cin >> a >> b;

    std::cout << gcd(a, b);

    return 0;
}

ll gcd(ll a, ll b){
    if(b == 0){
        return a;
    }
    else{
        return gcd(b, a % b);
    }
}
