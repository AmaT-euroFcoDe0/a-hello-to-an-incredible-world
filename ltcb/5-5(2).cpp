/*lequobuu*/
#include<iostream>
#define ll long long

int a[26];

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    char x;
    while(std::cin >> x){
        if(x >= 'a' && x <= 'z'){
            ++a[x - 'a'];
        }
    }

    for(int i = 0; i < 26; ++i){
        if(a[i]){
            std::cout << char('a' + i) << ":" << a[i] << '\n';
        }
    }

    return 0;
}
