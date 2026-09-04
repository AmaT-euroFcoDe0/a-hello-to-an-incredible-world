#include<iostream>
using ll = long long;

ll digitSum(ll n);

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    ll n;
    std::cin >> n;

    std::cout << digitSum(n);

    return 0;
}

ll digitSum(ll n){
    if(n == 0){
        return 0;
    }
    else{
        return (n % 10) + digitSum(n / 10);
    }
}
