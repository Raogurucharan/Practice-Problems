//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;

void largestAndSecondLargest(int, int[]);


 // } Driver Code Ends
     

/* Function to find largest and second largest element
*sizeOfArray : number of elements in the array
* arr = input array
*/
void largestAndSecondLargest(int sizeOfArray, int arr[]){
    int max = INT_MIN, max2= INT_MIN;
    int n=sizeOfArray;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max2 &&arr[i]<max)
        {
            max2=arr[i];
        }
    }
    if(max2==INT_MIN)
    max2=-1;
     cout << max << " " << max2 << endl;
}

// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    largestAndSecondLargest(sizeOfArray, arr);
	}
	
	return 0;
}  // } Driver Code Ends
