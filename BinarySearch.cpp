#include<iostream>
using ll = long long;

int binarySearch(int nums[], int target, int left, int right);

int main()
{
    std::cin.tie(NULL)->sync_with_stdio(false);

    ll n;
    std::cin >> n;

    int nums[100005];
    for(int i = 0; i < n; ++i){
        std::cin >> nums[i];
    }

    int target;
    std::cin >> target;

    std::cout << binarySearch(nums, target, 0, n - 1);

    return 0;
}

int binarySearch(int nums[], int target, int left, int right){
    if(left > right){
        return -1;
    }
    
    int mid = left + (right - left) / 2;

    if(nums[mid] == target){
        return mid;
    }
    else if(nums[mid] > target){
        return binarySearch(nums, target, left, mid - 1);
    }
    else{
        return binarySearch(nums, target, mid + 1, right);
    }
}
