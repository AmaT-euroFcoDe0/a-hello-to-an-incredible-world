/*lequobuu*/
#include<iostream>
#define ll long long

int a, b, c, d, n, max, min;

void typed();

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    std::cin >> n;

    a = n / 1000;
    b = (n / 100) % 10;
    c = (n / 10) % 10;
    d = n % 10;

    typed();

    std::cout << max + min;

    return 0;
}

void typed(){
    max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;

    min = a;
    if(b < min) min = b;
    if(c < min) min = c;
    if(d < min) min = d;
}
