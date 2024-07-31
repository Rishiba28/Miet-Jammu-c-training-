#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> myList;
    int element, position;

    // Input the element and position from the user
    cout << "Enter the element to add: ";
    cin >> element;
    cout << "Enter the position to add the element: ";
    cin >> position;

    // Add element to the specified position
    if (myList.empty() || position == 0) {
        myList.push_front(element);
    } else {
        auto it = myList.begin();
        // Manually iterate to the specified position
        for (int i = 0; i < position && it != myList.end(); ++i) {
            ++it;
        }
        myList.insert(it, element);
    }

    // Display the list
    cout << "The list after insertion: ";
    for (int num : myList) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
