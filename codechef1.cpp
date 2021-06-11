#include <iostream>
using namespace std;
typedef long long LL;

int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
		LL first, sec,third,fourth;
		cin>>first>>sec>>third>>fourth;
		LL sum=0;
		sum=sum+(third/first )+ (fourth/sec);
		cout<<sum<<endl;
	}
	
}

