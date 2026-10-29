#include<iostream>

int main()
{
    int a, b, c, max, min;
    std::cin >> a >> b >> c;

    max = a;
    if(b > max) max = b;
    if(c > max) max = c;

    min = b;
    if(a < min) min = a;
    if(c < min) min = c;

    std::cout << max << " " << min;

    return 0;
}
