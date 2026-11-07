#include<iostream>

int a[13];
int count {0};
bool usedCol[13];
bool usedDiag1[26];
bool usedDiag2[26];

void solve(int a[], int row, int n, int &count);

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    int n;
    std::cin >> n;

    solve(a, 0, n, count);

    std::cout << "TONG SO CACH XEP LA: " << count << '\n';

    return 0;
}

void solve(int a[], int row, int n, int &count){
    if(row == n){
        for(int i = 0; i < n; ++i){
            std::cout << "(" << i << ", " << a[i] << ")\n";
        }
        ++count;
        return;
    }

    for(int col = 0; col < n; ++col){
        int diag1 = row + col;
        int diag2 = row - col + 13;

        if(usedCol[col] || usedDiag1[diag1]|| usedDiag2[diag2]){
            continue;
        }

        a[row] = col;
        usedCol[col] = true;
        usedDiag1[diag1] = true;
        usedDiag2[diag2] = true;

        solve(a, row + 1, n, count);

        usedCol[col] = false;
        usedDiag1[diag1] = false;
        usedDiag2[diag2] = false;
    }
}
