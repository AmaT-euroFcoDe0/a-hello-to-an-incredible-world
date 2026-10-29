/*lequobuu*/
#include<iostream>
#define ll long long

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    int a[100], n {0};

    while(std::cin >> a[n]){
        ++n;
    }

    int max = a[0];
    for(int i = 0; i < n; ++i){
        if(max < a[i]){
            max = a[i];
        }
    }
    std::cout << max;

    return 0;
}
