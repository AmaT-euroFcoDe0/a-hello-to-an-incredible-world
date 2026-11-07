/*lequobuu*/
#include<iostream>
#include<vector>
#define ll long long

const int N = 200000;

int main(){
    std::cin.tie(NULL)->sync_with_stdio(false);

    std::vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i <= N / i; ++i){
        if(isPrime[i]){
            for(int j = i * i; j <= N; j += i) isPrime[j] = false;
        }
    }

    int k, count{0};
    ll sum{0};
    std::cin >> k;

    for(int n = 3; n + 2 <= N; ++n){
        if(isPrime[n] && isPrime[n + 2]){
            sum += n;
            if(++count == k) break;
        }
    }

    std::cout << sum;

    return 0;
}

// Số chèn là số mà thoả mãn n và n + 2 đều là số nguyên tố
// 3, 5, 11, 17, ...