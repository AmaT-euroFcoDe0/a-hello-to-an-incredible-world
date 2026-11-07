/*lequobuu*/
#include<iostream>
#define ll long long

bool isPrime(ll x);

int main(){
    std::cin.tie(NULL)->sync_with_stdio(false);

    ll n;
    std::cin >> n;

    std::cout << ((isPrime(n) && isPrime(n + 2)) ? "Yes" : "No");

    return 0;
}

bool isPrime(ll x){
    if(x < 2) return false;
    for(ll i = 2; i <= x / i; ++i){
        if(x % i == 0) return false;
    }
    return true;
}
