/*lequobuu*/
#include<iostream>
#define ll long long

int main(){
    std::cin.tie(NULL)->sync_with_stdio(false);

    int n;
    std::cin >> n;

    ll a = 0, b = 1;                  // a = F(i-2), b = F(i-1)
    for(int i = 2; i <= n; ++i){
        ll c = a + b;                 // F(i) = F(i-2) + F(i-1)
        a = b;                        // F(i-1) thành "số trước trước" của vòng sau
        b = c;                        // F(i) thành "số liền trước" của vòng sau
    }

    std::cout << ((n == 0) ? a : b);    // n = 0 thì kết quả là a = 0

    return 0;
}
