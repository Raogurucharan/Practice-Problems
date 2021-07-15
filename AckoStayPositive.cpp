// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

int minStartValue(vector<int>& nums)
{
	int minValue = 0;
	int sum = 0;
	for (auto n : nums) {
		sum += n;
		minValue = min(minValue, sum);
	}
	int startValue = 1 - minValue;
	return startValue;
}

int main()
{
	vector<int> nums = {3,-6,5,-2,1};
	cout << minStartValue(nums);
	return 0;
}
