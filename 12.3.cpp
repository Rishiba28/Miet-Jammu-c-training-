#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> numbers={1,2,3,4,5};
	cout<<"First Element: ";<<numbers.front()<<endl;
	cout<<"Last Element: ";<<numbers.back()<<endl;
	retrun 0;
}
