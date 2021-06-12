#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
    ll p,q,D,d;
    std::cin >> D>>d>>p>>q;
    ll sum=0;
    ll x,y;
    x=D/d;
    if(x%2==0)
    {
        sum=sum+ d * ((x/2)*(2*p +(x-1)*q));
    }
    else
    {
        sum=sum+ d* (x*(p+ ((x-1)/2)*q));
    }
    sum=sum+(D%d) * (p+(x)*q);
    cout<<sum<< "\n" ;
	}
}

