/*lequobuu*/
#include<iostream>
#define ll long long

struct PhanSo{
    ll tu, mau;
};

PhanSo rutGon(PhanSo sum);
PhanSo solve(PhanSo p1, PhanSo p2);

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    PhanSo p1, p2;

    std::cin >> p1.tu >> p1.mau >> p2.tu >> p2.mau;

    if(p1.mau == 0 || p2.mau == 0){
        std::cout << -1;
    }
    else{
        PhanSo sum = rutGon(solve(p1, p2));
        std::cout << sum.tu << "/"<< sum.mau;
    }

    return 0;
}

PhanSo rutGon(PhanSo sum){
    ll a = sum.tu;
    ll b = sum.mau;
    if(a < 0) a = -a;
    if(b < 0) b = -b;

    while(b){
        ll tmp = a % b;
        a = b;
        b = tmp;
    }

    sum.tu /= a;
    sum.mau /= a;

    if(sum.mau < 0){
        sum.tu = -sum.tu;
        sum.mau = -sum.mau;
    }
    return sum;
}

PhanSo solve(PhanSo p1, PhanSo p2){
    PhanSo sum;
    sum.tu = p1.tu * p2.mau + p1.mau * p2.tu;
    sum.mau = p1.mau * p2.mau;
    return sum;
}
