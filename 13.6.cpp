#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream my_file("example.txt",ios::app);
	if(!my_file)
	{
		cout<<"Failed to open the file for appending."<<endl;
		return 1;
	}
	my_file<<"Dev 27"<< endl;
	my_file<<"Manik 18"<< endl;
	my_file<<"Nandini 17"<<endl;
	my_file.close();
	return 0;
}
