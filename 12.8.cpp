#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>numbers = {1,2,1,3,4,1};
	cout<<"initial list:";
	for(int number : numbers){
		cout<<number<<", ";
	}
	numbers.remove(1);
	cout<<endl<<"Final list:";
	for(int number : numbers)
	{
		cout<<number<<", ";
	}
	return 0;
}
