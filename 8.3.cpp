#include <iostream>
#include <vector>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxCount = 0;
    int currentCount = 0;

    for (int num : nums) {
        if (num == 1) {
            currentCount++;
            maxCount = max(maxCount, currentCount);
        } else {
            currentCount = 0;
        }
    }

    return maxCount;
}
int main() {
    // Example 1
    vector<int> nums1 = {1, 1, 0, 1, 1, 1};
    cout << "Example 1: " << findMaxConsecutiveOnes(nums1) << endl; // Output: 3

    // Example 2
    vector<int> nums2 = {1, 0, 1, 1, 0, 1};
    cout << "Example 2: " << findMaxConsecutiveOnes(nums2) << endl; // Output: 2

    return 0;
}

