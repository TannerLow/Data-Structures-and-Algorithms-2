#include <iostream>
#include <vector>
#include "binary_search.h"

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    std::cin >> T;

    while (T--) {
        int n, target;
        std::cin >> n >> target;
        std::vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            std::cin >> nums[i];
        }

        std::cout << binarySearch(nums, target) << "\n";
    }
    return 0;
}
