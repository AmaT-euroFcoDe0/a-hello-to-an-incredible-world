#include<iostream>
using ll = long long;

ll factorial(ll n);

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    ll n;
    std::cin >> n;

    std::cout << factorial(n) << '\n';

    return 0;
}

ll factorial(ll n){
    if(n > 1){
        return n * factorial(n - 1);
    }
    else{
        return 1;
    }
}
