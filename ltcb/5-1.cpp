/*lequobuu*/
#include<iostream>

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    int n, a[100];
    std::cin >> n;

    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
        std::cout << a[i] << " ";
    }

    return 0;
}
