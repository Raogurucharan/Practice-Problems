
//Time complexity :O(2^n)

#include<iostream>
using namespace std;
int findmax(int arr[], int n)
{
    if(n<=0)
    {
        return 0;
    }
    int firstRec= arr[n-1]+ findmax(arr,n-2);
    int secRec=findmax(arr,n-1);

    int maxi=max(firstRec, secRec);
    return maxi;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<findmax(arr,n);
}
/*
3,8,10,4,2,3
*/