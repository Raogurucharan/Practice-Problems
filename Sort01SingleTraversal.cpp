#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void SortBinaryArray(int arr[],int n)
{
    int toswap=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            toswap++;
            swap(arr[i],arr[toswap]);
        }
    }
}

int main()
{
    int arr[]={1,0,1,1,1,0,0,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    SortBinaryArray(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}