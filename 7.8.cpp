#include<iostream>
#include<vector>
#include<string>
#include<numeric> //for accumulate
using namespace std;
int main()
{
	vector<std::string> words={"Hello","world","from","C++"};
	//Using accumulate with a lambda to concatenate strings
	string result = accumulate(words.begin(),words.end(),string(""),
	[](const std::string& total,const string& word)
	{
		return total + (total.empty() ? ""; " ")+ word;
	});
	cout<<"Concatenated string: "<<result<<endl;
	return 0;
}
