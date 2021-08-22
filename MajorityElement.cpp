#include<iostream>
using namespace std;

int MajorityEle(int arr[], int n)
{
    int index;
    int maxcount=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>maxcount)
        {
            maxcount=count;
            index=i;
        }
    }
    return arr[index];
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
    cout<<MajorityEle(arr,n);
}