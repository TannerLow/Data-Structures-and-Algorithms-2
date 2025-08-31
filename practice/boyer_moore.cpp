#include <iostream>
#include <vector>
#include "boyer_moore.h"

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];

        cout << majorityElement(nums) << "\n";
    }

    return 0;
}
