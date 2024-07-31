#include<iostream>
using namespace std;

	int rsum(int n)
	{
		if(n==0){
		
	return 0;
	}
	else{
		return (n%10)+rsum(n/10);
		}
	
	
}
int main()
{
	int n;
	cin>>n;
	cout<<"The sum of the digits of"<<n<<"is"<<rsum(n)<<endl;
	return 0;
}
