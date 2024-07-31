#include <iostream>
#include <vector>

std::pair<int, int> countConsecutiveOnesAndZeroes(const std::vector<int>& arr) {
    int maxOnesCount = 0;
    int currentOnesCount = 0;
    int maxZeroesCount = 0;
    int currentZeroesCount = 0;

    for (int num : arr) {
        if (num == 1) {
            currentOnesCount++;
            currentZeroesCount = 0;
            if (currentOnesCount > maxOnesCount) {
                maxOnesCount = currentOnesCount;
            }
        } else if (num == 0) {
            currentZeroesCount++;
            currentOnesCount = 0;
            if (currentZeroesCount > maxZeroesCount) {
                maxZeroesCount = currentZeroesCount;
            }
        }
    }

    return {maxOnesCount, maxZeroesCount};
}

int main() {
    std::vector<int> arr = {1, 0, 1, 1, 0, 1, 1, 1};

    auto result = countConsecutiveOnesAndZeroes(arr);
    std::cout << "The maximum number of consecutive 1s is: " << result.first << std::endl;
    std::cout << "The maximum number of consecutive 0s is: " << result.second << std::endl;

    return 0;
}

