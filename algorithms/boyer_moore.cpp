#include <vector>
#include <iostream>

// Boyer-Moore Majority Vote Algorithm
int majorityElement(std::vector<int>& nums) {
    int res = 0, count = 0;
    for (int num : nums) {
        if (count == 0) {
            res = num;
            count = 1;
        } else if (num == res) {
            count++;
        } else {
            count--;
        }
    }
    return res;
}

int main() {
    std::vector<int> nums{7,7,9,7,9,4,9,9,9,7,9};

    std::cout << "majority: " << majorityElement(nums) << std::endl;

    return 0;
}