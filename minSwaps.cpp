//Minimum swaps required to bring all elements less than or equal to k together
//Given an array of n positive integers and a number k.
//Find the minimum number of swaps required to bring all the numbers less than or equal to k together.

// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <iostream>
using namespace std;

int minSwap(int arr[], int n, int k) {
	
	int count = 0;
	for (int i = 0; i < n; ++i)
		if (arr[i] <= k)
			++count;

	int badCount = 0;
	for (int i = 0; i < count; ++i)
		if (arr[i] > k)
			++badCount;

	int ans = badCount;
	for (int i = 0, j = count; j < n; ++i, ++j) {
		if (arr[i] > k)
			--badCount;

		if (arr[j] > k)
			++badCount;

		ans = min(ans, badCount);
	}
	return ans;
}

int main() {
	int arr[] = {2, 7, 9, 5, 8, 7, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 5;
	cout << minSwap(arr, n, k);
	return 0;
}
