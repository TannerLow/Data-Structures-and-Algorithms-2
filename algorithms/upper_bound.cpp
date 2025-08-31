#include <vector>
#include <iostream>

// zeros in on the right side or backtracks with new max bound
int upperBound(std::vector<int>& nums, int target) {
    int size = 0;
    int step  = 0;
    int first = 0;
    int last  = nums.size();
    int index = 0;

    size = last - first;

    // while search space is non-zero
    while(size > 0) {
        index = first; // start on the right
        step = size / 2; // mark half way across the search space
        index += step; // move to that half way mark

        // if current number is the target or less
        if (target >= nums[index]) {
            // search space becomes half of the right side
            index++;
            first = index;
            size -= step+1;  
        }
        // if current number is bigger than target
        else {
            // search space becomes left side
            size = step;
        }
    }
    return first;
}