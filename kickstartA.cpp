#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
    int n;
    long long int target;
    cin>>n;
    cin>>target;
    int sum=0;
    int count=0;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum<=target)
        {
            count++;
        }
    }
    cout<<count<<endl;
    }
}