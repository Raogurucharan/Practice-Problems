// Maximum product of sum of two contiguous subarrays of an array
#include<iostream>
using namespace std;

int maxProductSum(int arr[], int n )
{
    int firstsum=0; int maxiproduct=0;
    for(int i=0;i<n;i++)
    {
        firstsum=firstsum+arr[i];
        int secondsum=0;
        for(int j=i+1;j<n;j++)
        {
            secondsum+=arr[j];
        }
        int finalsum=firstsum * secondsum;
        if(maxiproduct < finalsum)
        {
            maxiproduct=finalsum;
        }
    }
    return maxiproduct;
}

int main()
{
    int arr[]={4, 10, 1, 7, 2, 9};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<< maxProductSum(arr,size);
}
//TIME COMPLEXITY : O(n^2)