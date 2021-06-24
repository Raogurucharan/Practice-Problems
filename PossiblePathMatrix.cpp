// A C++ program to count all possible paths
// from top left to bottom right

#include <iostream>
using namespace std;
int numberOfPaths(int m, int n)
{
	if (m == 1 || n == 1)
		return 1;
	return numberOfPaths(m - 1, n) + numberOfPaths(m, n - 1);
}

int main()
{
	cout << numberOfPaths(5, 3);
	return 0;
}

/*
#include<iostream>
using namespace std;

 int getCount(int i, int j, int n , int m)
	{
	    if(i==n-1 || j==m-1)
	        return 1;
	   int ans=0;
	    if(i<m )
	        ans+= getCount(i+1,j,n,m)+getCount(i,j+1,n,m);
	   return ans;
	        
	}

int main()
{
    cout << getCount(0,0,5, 3);
    return 0;
}
*/