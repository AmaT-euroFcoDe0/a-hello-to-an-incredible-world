/*lequobuu*/
#include<iostream>
#define ll long long

ll ucln(ll a, ll b);
ll bcnn(ll a, ll b);

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    ll a, b;
    std::cin >> a >> b;

    std::cout << bcnn(a, b);

    return 0;
}

ll ucln(ll a, ll b){
    ll r;
    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll bcnn(ll a, ll b){
    return (a * b) / ucln(a, b);
}
