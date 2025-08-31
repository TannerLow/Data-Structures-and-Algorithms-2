#include <iostream>
#include <vector>
#include "upper_bound.h"

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

        cout << upperBound(nums, target) << "\n";
    }
    return 0;
}
