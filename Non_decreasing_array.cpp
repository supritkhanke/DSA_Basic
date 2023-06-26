#include<iostream>
#include<vector>

void makeNonDecreasing(std::vector<int>& nums) {
    int n = nums.size();

    for (int i = 1; i < n; i++) {
        if (nums[i] < nums[i - 1]) {
            nums[i] = nums[i - 1];
        }
    }
}

int main() {
    std::vector<int> nums = {5, 3, 8, 2, 6};

    makeNonDecreasing(nums);

    std::cout << "Modified array: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
