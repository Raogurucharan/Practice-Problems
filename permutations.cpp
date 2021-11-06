/*#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  if (n == 1) cout << "1\n";
  else if (n < 4) cout << "NO SOLUTION\n";
  else if (n == 4) cout << "3 1 4 2\n";
  else {
    for (int i = 1; i <= n; i += 2) cout << i << " ";
    for (int i = 2; i <= n; i += 2) {
      cout << i;
      if (i < n - 1) cout << " ";
      else cout << endl;
    }
  }
}*/
/*
#include <iostream>
 
using namespace std;
 
typedef long long ll;
 
int main() {
  int n;
  cin >> n;
  ll sum = 0;
  int a, b;
  cin >> a;
  for (int i = 1; i < n; i++) {
    cin >> b;
    if (b < a) sum += a - b;
    else a = b;
  }
  cout << sum << endl;
}*/
// C++ program to find number of rotations 
// in a sorted and rotated array. 
// C++ program to find number of rotations 
// in a sorted and rotated array. 
#include<bits/stdc++.h> 
using namespace std; 

// Returns count of rotations for an array which 
// is first sorted in ascending order, then rotated 
int countRotations(int arr[], int n) 
{ 
	// We basically find index of minimum 
	// element 
	int min = arr[0], min_index; 
	for (int i=0; i<n; i++) 
	{ 
		if (min > arr[i]) 
		{ 
			min = arr[i]; 
			min_index = i; 
		} 
	} 
	return min_index; 
} 

// Driver code 
int main() 
{ 
	int arr[] = {1,3,2,5,4}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	cout << countRotations(arr, n); 
	return 0; 
} 


