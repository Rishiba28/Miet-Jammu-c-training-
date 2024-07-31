#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string line;
	while(!my_file.eof()){
		getline(my_file,line);
		cout<<line<<endl;
	}
	my_file.close();
	return 0;
}
