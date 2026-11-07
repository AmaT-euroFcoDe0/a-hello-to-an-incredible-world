/*lequobuu*/
#include<iostream>
#define ll long long

int digitSum(ll x);

int main(){
    std::cin.tie(NULL)->sync_with_stdio(false);

    ll n;
    std::cin >> n;

    ll original = n;
    int factorSum {0}, count {0};

    for(ll i = 2; i <= n / i; ++i){
        while(n % i == 0){
            factorSum += digitSum(i);
            ++count;
            n /= i;
        }
    }

    if(n > 1){
        factorSum += digitSum(n);
        ++count;
    }

    std::cout << ((count >= 2 && factorSum == digitSum(original)) ? "Yes" : "No");

    return 0;
}

int digitSum(ll x){
    int sum {0};
    while(x > 0){
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
