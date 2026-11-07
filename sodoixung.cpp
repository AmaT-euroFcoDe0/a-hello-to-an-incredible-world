/*lequobuu*/
#include<iostream>
#include<string>
#define ll long long

int main(){
    std::cin.tie(NULL)->sync_with_stdio(false);

    ll n;
    std::cin >> n;

    std::string s = std::to_string(n);
    bool check = true;

    for(int i = 0; i < (int)s.size() / 2; ++i){
        if(s[i] != s[s.size() - 1 - i]){
            check = false;
            break;
        }
    }

    std::cout << ((check) ? "Yes" : "No");

    return 0;
}
