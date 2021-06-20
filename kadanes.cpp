#include<iostream>
using namespace std;

int maxSubarray(int arr[],int size)
{
    int max_untilNow=arr[0];
    int max_finally=arr[0];
    for(int i=1;i<size;i++)
    {
        max_untilNow=max(arr[i],max_untilNow+arr[i]);
        max_finally=max(max_finally,max_untilNow);
    }
    return max_finally;
}

int main()
{
    int arr[5]={3,4,-6,4,1};  
    int size=5;
    cout<<maxSubarray(arr,size);   // op=7
} 
