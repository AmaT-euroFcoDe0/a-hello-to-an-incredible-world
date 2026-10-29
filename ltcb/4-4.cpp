/*lequobuu*/
#include<iostream>
#define ll long long

int ucln(int a, int b);

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    int a, b;
    std::cin >> a >> b;

    std::cout << ucln(a, b);

    return 0;
}

int ucln(int a, int b){
    /*
    if(a * b == 0) return a + b;

    if(a != b){
        if(a > b) a = a - b;
        if(b > a) b = b - a;
    }
    return a;
    */

    /*
    while(a != b){
    if(a > b) a -= b;
    else b -= a;
    }
    return a;
    */

    ll r;
    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
