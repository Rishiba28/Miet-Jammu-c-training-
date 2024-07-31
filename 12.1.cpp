#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> numbers={1,2,3,4};
	cout<<"Initial list: ";
	for(int number:numbers)
	{
		cout<<number<<", ";
	}
	numbers.push_front(0);
	numbers.push_back(4);
	cout<<endl<<"Final List:";
	for(int number:numbers){
		cout<<number<<", ";
	}
	return 0;
}
