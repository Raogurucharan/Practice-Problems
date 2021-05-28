#include<iostream>
using namespace std;
int main()
{
	int arr[110];
	int num;
	cin>>num;
	int len=0;
	int count;
	int result=0;
	while(num>0)
	{
		arr[len]=num%2;
		num=num/2;
		if(arr[len]==0)
		{
			count=0;
		}
		else
		count++;
		result=max(result, count);
		len++;
	}
	cout<<"number of cons one is :"<<result;
}
