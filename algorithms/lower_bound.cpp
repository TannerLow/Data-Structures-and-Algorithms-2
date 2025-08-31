#include <iostream>
#include <vector>

int lowerBound(std::vector<int>& nums, int target) {
    int left = 0;
    int size = nums.size();

    while(size > 0) {
        int step = size / 2;

        if(nums[left + step] < target) {
            left += step+1;
            size -= step+1;
        }
        else {
            size = step;
        }
    }
    return left;
}

int main() {
    srand(time(0));

    std::vector<int> nums{1,1,2,3,4,4,5};

    for(int num : nums) {
        std::cout << num << ' ';
    }
    std::cout << std::endl;

    std::cout << "lower bound of 1: " << lowerBound(nums, 1) << std::endl;
    std::cout << "lower bound of 0: " << lowerBound(nums, 0) << std::endl;
    std::cout << "lower bound of 4: " << lowerBound(nums, 4) << std::endl;
    std::cout << "lower bound of 7: " << lowerBound(nums, 7) << std::endl;
}