/*lequobuu*/
#include<iostream>
#define ll long long

bool checksnt(ll n);

int main(){
    std::cin.tie(NULL)->sync_with_stdio(false);

    ll n;
    std::cin >> n;

    ll sum {0};
    for(int i = 0; i < n; ++i){
        ll x;
        std::cin >> x;
        if(checksnt(x)) sum += x;
    }

    std::cout << sum;

    return 0;
}

bool checksnt(ll n){
    if(n < 2) return false;

    for(ll i = 2; i <= n / i; ++i){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
