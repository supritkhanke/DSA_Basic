#include <stdio.h>
#include <vector>

int FirstMissingPositive(std::vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
            std::swap(nums[nums[i] - 1], nums[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }

    return n + 1;
}

int main() {
    std::vector<int> nums = {3, 4, -1, 1};
    int missingNumber = FirstMissingPositive(nums);

    printf("The first missing positive number is: %d\n", missingNumber);

    return 0;
}
