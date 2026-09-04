#include<iostream>

void hanoi(int n, char from, char to, char aux);

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    int n;
    std::cin >> n;

    hanoi(n, 'A', 'C', 'B');

    return 0;
}

void hanoi(int n, char from, char to, char aux){
    if(n == 0){
        return;
    }

    hanoi(n - 1, from, aux, to);
    std::cout << "Chuyen dia " << n << " tu cot " << from << " sang cot " << to << '\n';\
    hanoi(n - 1, aux, to, from);
}
