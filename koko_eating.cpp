#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canEatAllBananas(const vector<int>& piles, int k, int h) {
    int hours = 0;
    for (int pile : piles) {
        hours += (pile + k - 1) / k; // Equivalent to ceil(pile / k)
    }
    return hours <= h;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int left = 1, right = *max_element(piles.begin(), piles.end());
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (canEatAllBananas(piles, mid, h)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

int main() {
    vector<int> piles1 = {3, 6, 7, 11};
    int h1 = 8;
    cout << "Minimum eating speed for example 1: " << minEatingSpeed(piles1, h1) << endl;

    vector<int> piles2 = {30, 11, 23, 4, 20};
    int h2 = 5;
    cout << "Minimum eating speed for example 2: " << minEatingSpeed(piles2, h2) << endl;

    vector<int> piles3 = {30, 11, 23, 4, 20};
    int h3 = 6;
    cout << "Minimum eating speed for example 3: " << minEatingSpeed(piles3, h3) << endl;

    return 0;
}
