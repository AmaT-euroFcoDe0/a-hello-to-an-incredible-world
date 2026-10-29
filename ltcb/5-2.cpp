/*lequobuu*/
#include<iostream>

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    int a[100];
    int n = 0;

    while(n < 100 && std::cin >> a[n]){
        ++n;
    }

    for(int i = 0; i < n; ++i){
        std::cout << a[i] << " ";
    }

    return 0;
}
