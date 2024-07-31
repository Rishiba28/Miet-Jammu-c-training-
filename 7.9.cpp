#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

// Function to count the occurrences of digits in a given string
void countDigits(const std::string& input) {
    std::unordered_map<char, int> digitCount;

    // Lambda to check if a character is a digit
    auto isDigit = [](char c) -> bool {
        return c >= '0' && c <= '9';
    };

    // Lambda to update the count of a digit
    auto updateCount = [&digitCount](char c) {
        digitCount[c]++;
    };
     // Iterate over the string and count the digits
    for (char c : input) {
        if (isDigit(c)) {
            updateCount(c);
        }
    }

    // Vector to store the digits and their counts for printing in order
    std::vector<std::pair<char, int>> result;

    // Collecting the results
    for (const auto& pair : digitCount) {
        result.push_back(pair);
    }

    // Print the results
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << i + 1 << ". number " << result[i].first << " is " << result[i].second << " times" << std::endl;
    }
}
int main()
{
    std::string input = "jhon12Doe18@gmail.com8";
    countDigits(input);
    return 0;
}

}
