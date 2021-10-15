
/*
The question is to increment the array by 1 
eg:
    I/P: {9,9}
    O?P: {1,0,0}

    I/P: {6,6,9}
    O/P: {6,7,0}

*/
#include <bits/stdc++.h>
using namespace std;
void ConcatAddOne(int arr[], int N)
{
    int ans = arr[0];
    for (int i = 1; i < N; i++) {
        int l = floor(log10(arr[i]) + 1);  // used to know the number of digits
        ans = ans * pow(10, l);
        ans += arr[i];
    }
   ans=ans+1;
   int len = floor(log10(ans) + 1);
   int secArray[len];
   for(int i=len-1;i>=0;i--)
   {
       secArray[i]=ans%10;
       ans/=10;
   }
   for(int i=0;i<len;i++)
   {
       cout<<secArray[i]<<" ";
   }
}
int main()
{
    int arr[] = { 9,9 };
    int N = sizeof(arr) / sizeof(arr[0]);
    ConcatAddOne(arr, N);
    return 0;
}