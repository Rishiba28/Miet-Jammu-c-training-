#include<iostream>
#include<vector>
#include<numeric> // for std::accumulate
int main()
{
	std::vector<int> numbers = {1,2,3,4,5};	
	//Using std::accumulate with a lambda to sum up the elements
	int sum = std::accumulate(numbers.begin(),numbers.end(),0,[](int total,int n)
	{
	return total+n;
	});
	std::cout<<"Sum: "<< sum << std::endl; //Output: Sum: 15
	return 0;
}
