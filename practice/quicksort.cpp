#include <vector>
#include <iostream>
#include "quicksort.h"

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    std::cin >> T;

    while (T--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }

        if (n > 0) {
            quicksort(arr, 0, n - 1);
        }

        for (int i = 0; i < n; i++) {
            std::cout << arr[i];
            if (i + 1 < n) {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}
