#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);
/*
// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}   //} Driver Code Ends
int convertFive(int n) {
    // Your code here
    int m=n;
    int i=1;
    while(m>0)
    {
        if(m%10==0)
        {
            n+=(i*5);
        }
        i*=10;
        m/=10;
    }
    return n;
} */
// C++ program to replace all ‘0’ 
// with ‘5’ in an input Integer 
#include <bits/stdc++.h> 
using namespace std; 

// A recursive function to replace all 0s 
// with 5s in an input number It doesn't 
// work if input number itself is 0. 
int convert0To5Rec(int num) 
{ 
	// Base case for recursion termination 
	if (num == 0) 
		return 0; 

	// Extraxt the last digit and 
	// change it if needed 
	int digit = num % 10; 
	if (digit == 0) 
		digit = 5; 

	// Convert remaining digits and 
	// append the last digit 
	return convert0To5Rec(num / 10) * 10 + digit; 
} 

// It handles 0 and calls convert0To5Rec() 
// for other numbers 
int convert0To5(int num) 
{ 
	if (num == 0) 
		return 5; 
	else
		return convert0To5Rec(num); 
} 

// Driver code 
int main() 
{ 
	int num = 10120; 
	cout << convert0To5(num); 
	return 0; 
} 

// This code is contributed by Code_Mech. 


