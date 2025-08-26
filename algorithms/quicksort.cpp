#include <iostream>
#include <algorithm>
#include <vector>

int partition(std::vector<int>& nums, int left, int right) {
    int pivot = nums[right];
    int i = left-1;
    
    for(int j = left; j < right; j++) {
        if(nums[j] <= pivot) {
            i++;
            std::swap(nums[i], nums[j]);
        }
    }

    std::swap(nums[i+1], nums[right]);
    return i+1;
}

void quicksort(std::vector<int>& nums, int left, int right) {
    if(left >= right) {
        return;
    }

    int pivot = partition(nums, left, right);
    quicksort(nums, left, pivot-1);
    quicksort(nums, pivot+1, right);
}

int main() {
    std::vector<int> nums{6,2,8,1,3,7,4};

    quicksort(nums, 0, nums.size()-1);

    for(int num : nums) {
        std::cout << num << ' ';
    }
    std::cout << std::endl;

    return 0;
}