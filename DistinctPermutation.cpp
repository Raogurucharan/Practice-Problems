
#include <bits/stdc++.h>
using namespace std;

bool shouldSwap(char str[], int start, int curr)
{
	for (int i = start; i < curr; i++)
		if (str[i] == str[curr])
			return 0;
	return 1;
}

void findPermutations(char str[], int index, int n)
{
	if (index >= n) {
		cout << str << endl;
		return;
	}

	for (int i = index; i < n; i++) {
		bool check = shouldSwap(str, index, i);
		if (check) {
			swap(str[index], str[i]);
			findPermutations(str, index + 1, n);
			swap(str[index], str[i]);
		}
	}
}

int main()
{
	char str[] = "aaaa";
	int n = strlen(str);
	findPermutations(str, 0, n);
	return 0;
}
