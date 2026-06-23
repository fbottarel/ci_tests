#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Scratch area — mess around here
    std::vector<int> nums = {5, 2, 8, 1, 9, 3};

    std::sort(nums.begin(), nums.end());

    for (int n : nums) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}
