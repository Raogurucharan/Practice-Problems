
#include <bits/stdc++.h>
using namespace std;
// Function to print all array elements
// whose frequency is greater than N / K
void NDivKWithFreq(int arr[], int N, int K)
{
	sort(arr, arr + N);
	int i=0;
	while(i < N) {
		int cnt = 1;
		while ( (i + 1) < N && arr[i] == arr[i + 1])
		{
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
	int arr[] = { 1, 2, 2, 6, 6, 6, 6, 7, 10,10,10,10,10,5 };
	int N = sizeof(arr) / sizeof(arr[0]);
	int K = 4;

	NDivKWithFreq(arr, N, K);
	return 0;
}
// TIME COMPLEXITY: O(NlogN)

/*
// C++ code to find elements whose
// frequency yis more than n/k
#include<bits/stdc++.h>
using namespace std;

void morethanNbyK(int arr[], int n, int k)
{
	int x = n / k;
	
	// unordered_map initialization
	unordered_map<int, int> freq;

	for(int i = 0; i < n; i++)
	{
		freq[arr[i]]++;
	}

	// Traversing the map
	for(auto i : freq)
	{
		
		// Checking if value of a key-value pair
		// is greater than x (where x=n/k)
		if (i.second > x)
		{
			
			// Print the key of whose value
			// is greater than x
			cout << i.first << endl;
		}
	}
}

// Driver Code
int main()
{
	int arr[] = { 1, 1, 2, 2, 3, 5,
				4, 2, 2, 3, 1, 1, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 4;
	
	morethanNbyK(arr, n, k);

	return 0;
}


*/