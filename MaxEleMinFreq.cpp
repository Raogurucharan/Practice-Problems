/*
Time Complexity: O(N)
Auxiliary Space: O(N)
*/
#include <bits/stdc++.h>
using namespace std;
int maxElementWithMinFreq(int* arr, int N)
{
	unordered_map<int, int> mp;
	for (int i = 0; i < N; i++) {
		mp[arr[i]]++;
	}
	int minFreq = INT_MAX;
	int maxValue = INT_MIN;
	for (auto x : mp) {
		int num = x.first;
		int freq = x.second;
		// If freq < minFreq, then update minFreq to freq and maxValue to the current element
		if (freq < minFreq) {
			minFreq = freq;
			maxValue = num;
		}
		// If freq is equal to the minFreq and current element > maxValue then update maxValue to the current element
		else if (freq == minFreq
				&& maxValue < num) {
			maxValue = num;
		}
	}
	return maxValue;
}

int main()
{
	int arr[] = { 2, 2, 5, 50, 50, 102, 99, 1 };
	int N = sizeof(arr) / sizeof(arr[0]);
	cout << maxElementWithMinFreq(arr, N);

	return 0;
}

/*
Input: arr[] = {2, 2, 5, 50, 1}
Output: 50
Explanation:
The element with minimum frequency is {1, 5, 50}. The maximum element among these element is 50.
Input: arr[] = {3, 2, 5, 6, 1}
Output: 6
*/
