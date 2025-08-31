#pragma once
#include <vector>
using namespace std;

// Boyer-Moore Majority Vote Algorithm
int majorityElement(vector<int>& nums) {
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
