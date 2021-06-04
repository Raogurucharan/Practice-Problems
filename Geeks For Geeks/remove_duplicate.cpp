/*
Approach: The basic idea is to use a HashMap to solve the problem. But there is a catch, the numbers in the array are from 0 to n-1,
and the input array has length n. So, the input array can be used as a HashMap. While Traversing the array,
if an element ‘a’ is encountered then increase the value of a%n‘th element by n. The frequency can be retrieved by dividing the a % n’th element by n.
Algorithm: 
Traverse the given array from start to end.
For every element in the array increment the arr[i]%n‘th element by n.
Now traverse the array again and print all those indexes i for which arr[i]/n is greater than 1. Which guarantees that the number n has been added to that index
This approach works because all elements are in the range from 0 to n-1 and arr[i] would be greater than n only if a value “i” has appeared more than once.*/

#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,3,3,4,5,1,6,6,5};  //only works if array elements are less than size of array :(
	int size=9;
	for(int i=0;i<size;i++)
	{
		arr[arr[i]%size]=arr[arr[i]%size] +size;
	}
	for(int j=0;j<size;j++)
	{
		if(arr[j]>=size*2)
		{
			cout<<j<<" "<<endl;
		}
	}
	return 0;
}
