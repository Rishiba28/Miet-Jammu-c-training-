#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream my_file("example.txt");
	if(my_file.is_open())
	{
		cout<<"error opening the file."<<endl;
		return 1;
	}
}
