#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>numbers = {1,2,3};
	cout<<"Initial List: ";
	for(int number : numbers)
	{
		cout<<number<<", ";
	}
	list<int>::iterator itr = numbers.begin();
	++itr;
	++itr;
	numbers.insert(itr,0);
	cout<<endl<<"Final List:";
	for(int number : numbers)
	{
		cout<<number<<", ";
	}
	return 0;
}
