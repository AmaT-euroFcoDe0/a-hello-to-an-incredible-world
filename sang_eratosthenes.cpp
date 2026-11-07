#include<iostream>
#include<vector>
#define ll long long

//Liệt kê số nguyên tố bằng "Sàng Eratosthenes"

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    int n;
    std::cin >> n;

    //Trường hợp không có snt nào (tức n < 2) thì in ra -1
    if(n < 2){
        std::cout << "-1\n";
        return 0;
    }

    std::vector<bool> isPrime(n + 1, true); //Ban đầu coi mọi số 0 -> n đều là snt, sau đó sẽ gạch dần
    isPrime[0] = false; //0 không là snt
    isPrime[1] = false; //1 không là snt

    /*Chỉ cần xét i đến căn n: một hợp số <= n luôn có ước nguyên tố <= căn n,
    nên nó chắc chắn bị gạch bởi một snt <= căn n*/
    for(int i = 2; (ll)i * i <= n; ++i){
        //Nếu i đã bị gạch (hợp số) thì bội của i cũng là bội của một snt nhỏ hơn, đã gạch rồi
        if(isPrime[i]){
            //Gạch từ i^2, i^2 + i, i^2 + 2i, ... (đều là bội của i)
            //Bắt đầu từ i^2 vì các bội nhỏ hơn (2i, 3i, ...) đã bị các snt nhỏ hơn gạch
            for(int j = i * i; j <= n; j += i){
                isPrime[j] = false; //Là bội của i thì gạch bỏ (chuyển T -> F)
            }
        }
    }

    //Từ (2 -> n) số nào còn là snt thì in ra
    for(int i = 2; i <= n; ++i){
        if(isPrime[i]){
            std::cout << i << " ";
        }
    }

    std::cout << '\n';

    return 0;
}
