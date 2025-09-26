#include <iostream>
#include <algorithm>
#include <vector>

bool next_permutation(std::vector<int>& nums) {
    int n = nums.size();
    if(n <= 1) return false;

    int i = n-2;
    while(i >= 0 and nums[i] >= nums[i+1]) {
        i--;
    }

    if(i < 0) {
        std::reverse(nums.begin(), nums.end());
        return false;
    }

    int j = n-1;
    while(j > 0 and nums[j] <= nums[i]) {
        j--;
    }

    std::swap(nums[j], nums[i]);

    std::reverse(nums.begin() + i + 1, nums.end());
    return true;
}

int main() {
    std::vector<int> nums{1,2,3};

    while(next_permutation(nums)) {
        for(int num : nums) {
            std::cout << num << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}