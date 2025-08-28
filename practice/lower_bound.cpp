#include <iostream>
#include <vector>
#include "lower_bound.h"

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, target;
        cin >> n >> target;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];

        cout << lowerBound(nums, target) << "\n";
    }
    return 0;
}
