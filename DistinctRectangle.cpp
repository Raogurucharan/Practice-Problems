/* Find number of DISTINCT rectangles that can be formed in array with Length*breath <= area  */
/* We could do it using bruteforce (2 loops) starting one loop from i=0 to n-1 and anathor from j=0 to n-1 */
#include<iostream>
using namespace std;
int DistinctRec(int arr[], int size, int limit)
{
    int i=0;
    int j=size-1;
    int len=0;
    int ans=0;
    while(i<=j)
    {
        if(arr[i]*arr[j]>=limit)
        {
            j--;
        }
        else
        {
            len=j-i+1;
            ans+=2*len-1;
            i++;
        }
    }
    return ans;
}
  // TIME COMPLEXITY= O(N) , SPACE=O(1)
int main()
{
    int arr[]={2,3,5,8,10};
    int size=5;
    int limit;
    cin>>limit;
    cout<<DistinctRec(arr,size,limit);
}
 