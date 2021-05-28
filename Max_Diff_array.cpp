/*maximum difference between two elements
*/
#include <bits/stdc++.h>
using namespace std;
int maxProfit(int prices[], int N)
{
	int n = N;
	int cost = 0;
	int maxCost = 0;
	if (n == 0)
	{
		return 0;
	}
	int min_price = prices[0];
	for(int i = 0; i < n; i++)
	{
		// Now compare first element with all
		// the element of array and find the
		// minimum element
		min_price = min(min_price, prices[i]);
		// Since min_price is smallest element of the
		// array so subtract with every element of the
		// array and return the maxCost
		cost = prices[i] - min_price;
		maxCost = max(maxCost, cost);
	}
	return maxCost;
}

int main()
{
// Stock prices on consecutive days
	int prices[] = { 1, 2, 90, 10, 110};
	int N = sizeof(prices) / sizeof(prices[0]);
	cout << maxProfit(prices, N);
	return 0;
}

// This code is contributed by divyeshrabadiya07



