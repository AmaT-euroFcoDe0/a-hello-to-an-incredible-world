/*lequobuu*/
#include<iostream>
#define ll long long

void nhap();

int main(){
    std::cin.tie(NULL)->sync_with_stdio(false);

    nhap();

    return 0;
}

void nhap(){
    int n;
    std::cin >> n;

    if(n >= 1000 && n <= 9999){
        if(n % 2 == 0){
            std::cout << "So Chan\n";
        }
        else std::cout << "So Le\n";
    }
    else std::cout << "So khong hop le\n";
}
