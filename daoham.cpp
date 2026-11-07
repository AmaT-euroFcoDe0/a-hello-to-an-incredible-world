#include<iostream>
#include<vector>
#include<cmath>

struct DonThuc{
    double a;
    int n;
};

void xuat(const std::vector<DonThuc>& p);
double tinh(const std::vector<DonThuc>& p, double x);
std::vector<DonThuc> daoHam(const std::vector<DonThuc>& p);

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    int k;
    std::cin >> k;

    std::vector<DonThuc> p(k);
    for(int i = 0; i < k; ++i) std::cin >> p[i].a;   // dòng 2: các hệ số
    for(int i = 0; i < k; ++i) std::cin >> p[i].n;   // dòng 3: các số mũ

    double x;
    std::cin >> x;

    xuat(p);
    std::cout << '\n' << tinh(p, x) << '\n';
    xuat(daoHam(p));

    return 0;
}

// TODO: viết xuat, tinh, daoHam