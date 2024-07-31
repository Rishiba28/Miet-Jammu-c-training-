#include<iostream>
#include<vector>
#include<algorithm> // For sort
using namespace std;
int main()
{
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    // using sort from the STL to sort the array in descending order
    sort(arr.begin(), arr.end(), greater<int>());
    cout << "Sorted array in descending order: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    return 0;
}

