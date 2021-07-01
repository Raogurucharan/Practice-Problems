// C++ program for Implementing
// prefix sum array
#include <bits/stdc++.h>
using namespace std;
void fillPrefixSum(int arr[], int n, int prefixSum[])
{
	prefixSum[0] = arr[0];

	for (int i = 1; i < n; i++)
		prefixSum[i] = prefixSum[i - 1] + arr[i];
}

int main()
{
	int arr[] = { 11, 5, 6, 20,30 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int prefixSum[n];

	fillPrefixSum(arr, n, prefixSum);
	for (int i = 0; i < n; i++)
		cout << prefixSum[i] << " ";
}
