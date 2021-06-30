#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n]; 
    bool odd=0;
    bool even =0;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i] % 2)
        {
            odd = true;
        }
        else
        even = true;
    }
    if(even && odd)
    {
        sort(arr, arr+n);
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}