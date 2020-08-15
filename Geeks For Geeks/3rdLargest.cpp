#include<bits/stdc++.h>
using namespace std;
 
long long thirdLargest(long long a[],long long n);
 
int main()
{int t;
cin>>t;
while(t--)
{
	long long n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<thirdLargest(a,n)<<endl;
}
}// } Driver Code Ends
 /* The function should return third largest element 
     in arr[0..n-1]. It may be assumed that all elements
     are distinct.  */
long long thirdLargest(long long a[], long long n)
{
     //Your code here
     if(n<3) return -1;
     sort(a,a+n);
     return a[n-3];
}
