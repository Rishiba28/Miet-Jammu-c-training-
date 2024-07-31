#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

void appendData() {
    ofstream my_file("example.txt", ios::app);
    if (!my_file) {
        cout << "Failed to open the file for appending." << endl;
        return;
    }
    my_file.close();
}

void calculateSumAndAverage() {
    ifstream my_file("example.txt");
    if (!my_file) {
        cout << "Failed to open the file for reading." << endl;
        return;
    }

    string line;
    int sum = 0;
    int count = 0;

    while (getline(my_file, line)) {
        stringstream ss(line);
        string name;
        int age;

        ss >> name >> age;
        sum += age;
        count++;
    }

    my_file.close();

    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "Sum of ages: " << sum << endl;
        cout << "Average age: " << average << endl;
    } else {
        cout << "No data to process." << endl;
    }
}

int main() {
    appendData();
    calculateSumAndAverage();
    return 0;
}

