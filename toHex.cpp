#include<iostream>
using ll = long long;

void toHex(ll n);

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    ll n;
    std::cin >> n;

    toHex(n);

    return 0;
}

void toHex(ll n){
    if(n < 16){
        if(n < 10){
            std::cout << n;
        }
        else{
            std::cout << (char)('A' + (n - 10));
        }
        return;
    }
    else{
        toHex(n / 16);
        ll digit = n % 16;
        if(digit < 10){
            std::cout << digit;
        }
        else{
            std::cout << (char)('A' + (digit - 10));
        }
    }
}
