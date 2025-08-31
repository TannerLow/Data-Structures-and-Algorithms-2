#pragma once
#include <vector>

int upperBound(const std::vector<int>& nums, int target) {
    int left = 0;
    int size = nums.size();

    while(size > 0) {
        int step = size / 2;

        if(nums[left + step] <= target) {
            left += step+1;
            size -= step+1;
        }
        else {
            size = step;
        }
    }
    return left;
}
