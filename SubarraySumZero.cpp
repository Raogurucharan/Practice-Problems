#include<iostream>
#include<bits/stdc++.h>

using namespace std;
bool isZeroSub(int arr[],int n)
{
    unordered_set<int> set;       // create an empty set to store the sum of elements of each
	                              // subarray `A[0…i]`, where `0 <= i < n`
    int sum=0;
    set.insert(0);              // insert 0 into the set to handle the case when subarray with
	                            // zero-sum starts from index 0
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(set.find(sum) != set.end())       // if the sum is seen before, we have found a subarray with zero-sum
        {
            return true;
        }
        else
        set.insert(sum);
    }
    return false;
}

int main()
{
    int arr[]={-2,-5,8,8,-8,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    (isZeroSub(arr,n)) ?
    cout<<"Subarray with zero present":
    cout<<"subarray with zero absent";
}
