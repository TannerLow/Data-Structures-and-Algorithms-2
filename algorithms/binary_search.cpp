#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size(); // half-open [left, right)

    while(left < right) {
        int mid = left + (right - left) / 2; // avoids overflow

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return -1; // not found
}

int main() {
    std::vector<int> nums{1,2,3,4,5,6,7,8,10,20,21,23,24};

    int index = binarySearch(nums, 6);

    std::cout << index << std::endl;

    index = binarySearch(nums, 24);

    std::cout << index << std::endl;

    index = binarySearch(nums, 1);

    std::cout << index << std::endl;

    index = binarySearch(nums, 13);

    std::cout << index << std::endl;

    index = binarySearch(nums, 10);

    std::cout << index << std::endl;

    index = binarySearch(nums, -1);

    std::cout << index << std::endl;

    return 0;
}