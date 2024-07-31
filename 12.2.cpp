#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> numbers{1,2,3,4};
	cout<<"List Elements: ";
	for(int number : numbers)
	{
		cout<<number<<", ";
	}
	return 0;
}
