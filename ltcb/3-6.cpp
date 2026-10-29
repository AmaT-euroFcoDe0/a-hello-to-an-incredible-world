/*lequobuu*/
#include<iostream>
#define ll long long

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    int a, b;
    while(std::cin >> a){
        b = 0;
        while(a > 0){
            b += a % 10;
            a = a / 10;
        }
        std::cout << b << '\n';
    }

    return 0;
}
