#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>numbers{0,1,2,3,4,5,3};
	list<int>::iterator itr = numbers.begin();
	cout<<"Initial List: ";
	for(int number : numbers)
	{
		cout<<number<<", ";
	}
	for(int i=0;i<3;i++)
	++itr;
}
cout<<"Final List:";
for(int number=numbers)
{
	cout<<number<<", ";
}
return 0;
}
