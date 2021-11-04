
#include <bits/stdc++.h>
using namespace std;
// Function to print all array elements
// whose frequency is greater than N / K
void NDivKWithFreq(int arr[], int N, int K)
{
	sort(arr, arr + N);
	for (int i = 0; i < N;) {
		int cnt = 1;
		while ((i + 1) < N
			&& arr[i] == arr[i + 1]) {
			cnt++;
			i++;
		}
		if (cnt > (N / K)) {
			cout << arr[i] << " ";
		}
		i++;
	}
}

int main()
{
	int arr[] = { 1, 2, 2, 6, 6, 6, 6, 7, 10 };
	int N = sizeof(arr) / sizeof(arr[0]);
	int K = 4;

	NDivKWithFreq(arr, N, K);

	return 0;
}

