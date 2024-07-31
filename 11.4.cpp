#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void printDuplicate(vector<string> words) 
{
    vector<string> duplicate;
    sort(words.begin(), words.end());
    for(int i = 1; i < words.size(); i++) {
        if(words[i-1] == words[i]) {
            if(duplicate.empty() || words[i] != duplicate.back()) 
			{
                duplicate.push_back(words[i]);
            }
        }
    }
    if(duplicate.size() == 0) {
        cout << "no duplicate words" << endl;
    } else {
        for(int i = 0; i < duplicate.size(); i++) {
            cout << duplicate[i] << endl;
        }
    }
}
int main()
{
	vector<string> words{"welcome","to","miet","for","intern","to","intern"};
printDuplicate(words);
return 0;
}

