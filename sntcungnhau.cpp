#include <iostream>

int func(int a, int b);

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    int n, m;
    std::cin >> n >> m;

    std::cout << ((func(n, m) == 1) ? "yes" : "no");
}

int func(int a, int b)
{
    while(b){
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
