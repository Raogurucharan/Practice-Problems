
/* Max Consecutive Ones III
Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array
 if you can flip at most k 0's.
Example 1:

Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: [1,1,1,0,0,1,1,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
Example 2:

Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
Output: 10
Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
*/
/*
Take A = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], K = 3 for example.
We know the answer is 10 with subarray from A[2] to A[11].
Through the iteration of j, this subarray would be found while j = 11 and i = 2.
What happens then?
Well as we keep iterate j we will find out that j and i keep adding 1 in every iteration,
 which makes the distance between j and i the same(and is the currently best).
The distance between j and i would change again if there is a longer subarray exist.
Try appending more 1s in A you'll see.
*/

#include<iostream>
using namespace std;

int longestOnes(int arr[],int n, int K) {
        int i = 0, j;
        for (j = 0; j < n; ++j) {
            if (arr[j] == 0)
             K--;
            if (K < 0 && arr[i++] == 0)
             K++;
        }
        return j - i;
    }

int main()
{
    int arr[]={0,0,1,1,0,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int K=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<< longestOnes(arr,n,K);
}
