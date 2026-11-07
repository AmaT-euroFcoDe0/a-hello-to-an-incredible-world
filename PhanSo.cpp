#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#define ll long long

struct PhanSo{
    ll tu, mau;
};

ll UCLN(ll a, ll b);
void rutGon(PhanSo &ps);
bool nhoHon(PhanSo ps1, PhanSo ps2);
void xuat(PhanSo ps);

int main()
{
    int n;
    std::cin >> n;
    
    PhanSo temp, minPS;   // temp: phân số vừa đọc; minPS: phân số nhỏ nhất tìm được đến giờ
    bool check = false;   // cờ: đã có phân số hợp lệ nào được lưu vào minPS chưa

    for(int i = 0; i < n; ++i){    // đọc đúng n dòng, mỗi dòng một cặp (tử, mẫu)
        std::cin >> temp.tu >> temp.mau;
        if(temp.mau == 0) continue;

        rutGon(temp);

        if(!check){
            minPS = temp;
            check = true;
        }
        else if(nhoHon(temp, minPS)){
            minPS = temp;
        }
    }

    if(check){          // chỉ in khi có ít nhất một phân số hợp lệ
        xuat(minPS);    // in phân số nhỏ nhất
    }

    return 0;
}

// Thuật toán Euclid: tìm ước chung lớn nhất
ll UCLN(ll a, ll b){
    a = std::abs(a);   // lấy giá trị tuyệt đối để xử lý được số âm
    b = std::abs(b);
    while(b != 0){
        ll temp = a % b;
        a = b;
        b = temp;
    }
    return a;          // khi b = 0 thì a chính là ƯCLN
}

// Rút gọn phân số về dạng tối giản và đưa dấu âm (nếu có) lên tử
void rutGon(PhanSo &ps){
    ll uc = UCLN(ps.tu, ps.mau);   // ước chung lớn nhất của tử và mẫu
    ps.tu /= uc;                   // chia cả tử và mẫu cho ƯCLN
    ps.mau /= uc;
    if(ps.mau < 0){                // nếu mẫu âm thì đổi dấu cả hai
        ps.tu = -ps.tu;            // để mẫu luôn dương, điều kiện để so sánh tích chéo đúng
        ps.mau = -ps.mau;
    }
}

// So sánh bằng tích chéo: a/b < c/d  <=>  a*d < c*b (khi b, d > 0)
bool nhoHon(PhanSo ps1, PhanSo ps2){
    // ép sang __int128 trước khi nhân để tích không bị tràn long long
    return (__int128)ps1.tu * ps2.mau < (__int128)ps2.tu * ps1.mau;
}

// In phân số: nếu mẫu bằng 1 thì chỉ in tử, ngược lại in dạng tu/mau
void xuat(PhanSo ps){
    if(ps.mau == 1){
        std::cout << ps.tu;                       // ví dụ 4/1 in thành 4
    }
    else{
        std::cout << ps.tu << "/" << ps.mau;      // ví dụ 1/2
    }
}
