#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <unordered_map>
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
void displayConsonantsAndVowels() {
    ifstream my_file("example.txt");
    if (!my_file) {
        cout << "Failed to open the file for reading." << endl;
        return;
    }
    string line;
    int consonants = 0;
    int vowels = 0;
    string vowels_list = "AEIOUaeiou";
    while (getline(my_file, line)) {
        for (char c : line) {
            if (isalpha(c)) {
                if (vowels_list.find(c) != string::npos) {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }
    }
    my_file.close();
    cout << "Total consonants: " << consonants << endl;
    cout << "Total vowels: " << vowels << endl;
}
void displayWordCount() {
    ifstream my_file("example.txt");
    if (!my_file) {
        cout << "Failed to open the file for reading." << endl;
        return;
    }
    string line;
    map<string, int> word_count;

    while (getline(my_file, line)) {
        stringstream ss(line);
        string word;
        while (ss >> word) {
            word_count[word]++;
        }
    }
    my_file.close();
    cout << "Word counts:" << endl;
    for (const auto &pair : word_count) {
        cout << pair.first << ": " << pair.second << endl;
    }
}
void displayDuplicateCharacters() {
    ifstream my_file("example.txt");
    if (!my_file) {
        cout << "Failed to open the file for reading." << endl;
        return;
    }
    string line;
    unordered_map<char, int> char_count;
    while (getline(my_file, line)) {
        for (char c : line) {
            if (isalnum(c)) {
                char_count[c]++;
            }
        }
    }
    my_file.close();
    cout << "Duplicate characters:" << endl;
    for (const auto &pair : char_count) {
        if (pair.second > 1) {
            cout << pair.first << ": " << pair.second << endl;
        }
    }
}
int main() {
    appendData();
    calculateSumAndAverage();
    displayConsonantsAndVowels();
    displayWordCount();
    displayDuplicateCharacters();
    return 0;
}

