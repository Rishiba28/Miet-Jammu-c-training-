#include<iostream>
#include<vector>
#include<algorithm> //For sort
using namespace std;
int main()
{
	vector<int> arr={10,7,8,9,1,5};
  //using sort from the STL to sort the array
	sort(arr.begin(),arr.end());
	cout<<"Sorted array:";
	for(int num : arr)
	{
		cout<<num<<" ";
	}
	return 0;
}
