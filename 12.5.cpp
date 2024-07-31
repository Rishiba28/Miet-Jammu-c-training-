#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>numbers = {1,2,3,4,5};
	list<int>::iterator itr = numbers.begin();
    ++itr;
    ++itr;
    cout<<"Third Element: "<<*itr<<endl;
    ++itr;
    ++itr;
    cout<<"Fifth Element: "<<*itr;
    return 0;
}
