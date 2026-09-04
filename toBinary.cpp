#include<iostream>
using ll = long long;

void toBinary(ll n);

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    ll n;
    std::cin >> n;

    toBinary(n);

    return 0;
}

void toBinary(ll n){
    if(n < 2){
        std::cout << n;
        return;
    }
    else{
        toBinary(n / 2);
        std::cout << n % 2;
    }
}
