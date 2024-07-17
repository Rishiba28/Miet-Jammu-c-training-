//Question 3
//Count of 3 Multiples
//Write a program to find the count of 3 multiples in a given input integer array.
#include <iostream>
using namespace std;
int divisibleBy3(int arr[], int size){
int count = 0;
for (int i=0; i<size; ++i){
    if (arr[i] % 3 == 0){
        ++count;
    }
}
return count;
}
int main(){
int numbers[] = {8,1,6,3,5,61,80,102,9};
int size = sizeof(numbers) / sizeof(numbers[0]);
int result = divisibleBy3(numbers,size);
cout << "The count of multiples of 3 in the array is: " << result << endl;
return 0;
}
