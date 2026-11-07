#include <iostream>
#include <vector>
using ll = long long;

int n;
bool usedCol[13];
bool usedDiag1[26];
bool usedDiag2[26];

std::vector<int> queensX;
std::vector<int> queensY;

void printQueens();
void genQueens(int curRow);

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    std::cin >> n;

    genQueens(1);

    return 0;
}

void printQueens(){
    for(int i = 0; i < n; ++i){
        std::cout << "(" << queensX[i] << ", " << queensY[i] << ")";
        if(i < n - 1){
            std::cout << ", ";
        }
    }
    std::cout << '\n';
}

void genQueens(int curRow){
    for(int curCol = 1; curCol <= n; ++curCol){
        int curDiag1 = curRow + curCol;
        int curDiag2 = curRow - curCol + 13;

        if(usedCol[curCol] || usedDiag1[curDiag1] || usedDiag2[curDiag2]){
            continue;
        }

        queensX.push_back(curRow);
        queensY.push_back(curCol);
        usedCol[curCol] = true;
        usedDiag1[curDiag1] = true;
        usedDiag2[curDiag2] = true;

        if(queensX.size() == n){
            printQueens();
        }
        else{
            genQueens(curRow + 1);
        }

        queensX.pop_back();
        queensY.pop_back();
        usedCol[curCol] = false;
        usedDiag1[curDiag1] = false;
        usedDiag2[curDiag2] = false;
    }
}
