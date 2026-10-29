/*lequobuu*/
#include<iostream>
#include<cmath>
#define ll long long

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    int n;
    std::cin >> n;

    int a = std::sqrt(n);
    std::cout << ((a * a == n) ? "yes" : "no");

    return 0;
}
