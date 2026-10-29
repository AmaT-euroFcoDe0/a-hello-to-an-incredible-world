/*lequobuu*/
#include<iostream>
#define ll long long

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    int i;
    std::cin >> i;

    for(int j = 1; j <= 10; ++j){
        std::cout << i << "*" << j << "=" << i * j << '\n';
    }

    return 0;
}
