#include<iostream>

bool isValid(int a[], int row, int col);
void solve(int a[], int row, int n, int &count);

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    int n;
    std::cin >> n;

    int a[12];
    int count = 0;

    std::cout << "TONG SO CACH XEP LA: " << count << '\n';

    return 0;
}

bool isValid(int a[], int row, int col){
    for(int i = 0; i < row; ++i){
        if(a[i] == col){
            return false;
        }
        if(std::abs(row - i) == std::abs(col - a[i])){
            return false;
        }
    }
    return true;
}

void solve(int a[], int row, int n, int &count){
    if(row == n){
        for(int i = 0; i < n; ++i){
            std::cout << "(" << i << ", " << a[i] << ")\n";
        }
        count++;
        return;
    }
    for(int col = 0; col < n; ++col){
        if(isValid(a, row, col)){
            a[row] = col;
            solve(a, row + 1, n, count);
        }
    }
}
