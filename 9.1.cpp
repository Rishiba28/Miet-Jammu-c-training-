#include <iostream>
using namespace std;
class MyClass {
public:
    // Function to print a greeting message
    void greet() {
        cout << "Hello, welcome to MyClass!" << endl;
    }
    // Function to add two numbers and return the result
    int add(int a, int b) {
        return a + b;
    }
};
int main() {
    // Create an object of MyClass
    MyClass obj;
    // Call the greet function
    obj.greet();
    // Call the add function and print the result
    int result = obj.add(5, 3);
    cout << "The result of addition is: " << result << endl;
    return 0;
}

