/*lequobuu*/
#include<iostream>
#define ll long long

int soNhoHon(int a, int b);

int main(){
    std::cin.tie(NULL)->sync_with_stdio(false);

    int a, b;
    std::cin >> a >> b;

    int ucln = 0;
    for(int i = 1; i <= soNhoHon(a, b); ++i){
        if(a % i == 0 && b % i == 0){
            ucln = i;
        }
    }

    std::cout << ucln;

    return 0;
}

int soNhoHon(int a, int b){
    if(a > b){
        return b;
    }
    return a;
}
