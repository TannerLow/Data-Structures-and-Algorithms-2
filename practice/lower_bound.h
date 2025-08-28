#pragma once
#include <vector>
using namespace std;

int lowerBound(const vector<int>& nums, int target) {
    int left = 0, right = nums.size(); // note: right = n, not n-1
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left; // first index where nums[i] >= target (or n if none)
}
