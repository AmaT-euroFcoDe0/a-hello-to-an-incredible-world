/*lequobuu*/
#include<iostream>
#define ll long long
#define ull unsigned long long

int main(){
    std::cin.tie(NULL)->sync_with_stdio(false);

    ll n, sum {0};
    std::cin >> n;

    for(int m = 1; sum < n; ++m){
        sum = m * (m + 1);
    }

    std::cout << ((sum == n) ? "Yes" : "No");

    return 0;
}
