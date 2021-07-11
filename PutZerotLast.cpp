
/*#include <iostream>
using namespace std;

// Function to move all zeros present in the array to the end
void reorder(int A[], int n)
{
	// k stores index of next available position
	int k = 0;

	// do for each element
	for (int i = 0; i < n; i++)
	{
		// if current element is non-zero, put the element at
		// next free position in the array
		if (A[i] != 0)
			A[k++] = A[i];
	}
    // move all 0's to the end of the array (remaining indices)
	for (int i = k; i < n; i++)
		A[i] = 0;
		
}

// Move all zeros present in the array to the end
int main()
{
	int A[] = { 6, 0, 8, 2, 3, 0, 4, 0, 1 ,44 , 5,6,7,0 ,0};
	int n = sizeof(A) / sizeof(A[0]);
	reorder(A, n);
	for (int i = 0; i < n; i++)
	cout<<A[i]<<" ";
	return 0;
}



*//*
#include<iostream>
using namespace std;
void reorder(int a[],int n)
{
	int k=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			a[k++]=a[i];
		}
	}
	for(int i=k;i<n;i++)
	{
		a[i]=0;
	}
}
int main()
{
	int a[]={1,0,6,4,2,6,0,8,7,0,5};
 	int n=sizeof(a)/sizeof(a[0]);
 	reorder(a,n);
 	for(int i=0;i<n;i++)
 	{
 		cout<<a[i]<<" ";
	}
}


*/

#include<iostream>
using namespace std;
void reorder(int a[],int n)
{
	int k=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			a[k++]=a[i];
		}
	}
	for(int i=k;i<n;i++)
	{
		a[i]=0;
	}
}

int main(){
	int a[]={1,0,9,7,45,0,6,0,7};
	int n=sizeof(a)/sizeof(a[0]);
	reorder(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}









































