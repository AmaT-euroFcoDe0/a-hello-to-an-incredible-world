#include<iostream>
using ll = long long;

ll fib(ll n);

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    ll n;
    std::cin >> n;

    std::cout << fib(n);

    return 0;
}

ll fib(ll n){
    if(n == 0) return n;
    if(n == 1) return n;
    return fib(n - 1) + fib(n - 2);
}
