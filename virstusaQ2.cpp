#include<iostream>
using namespace std;
int main()
{
    int num;
    int n;
    cin>>num;
    cin>>n;
    int sum=0;
    int arr[n];
    arr[0]=num;
    for(int i=1;i<n;i++)
    {
        arr[i]=arr[i-1]+3;
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
cout<<"Sum is :"<<sum;
}