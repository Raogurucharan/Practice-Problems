#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int testcase;
	int result=0;
	int n;
	int k;
	while(testcase--)
	{
	    cin>>n>>k;
	    vector<ll> arr(n);
	    vector<int> vec(32,0);
	    ll ans=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        ll value=arr[i];
	        int j=0;
	        while(value!=0)
	        {
	            vec[j]=vec[j]+(value%2);
	            value=value/2;
	            j++;
	        }
	    }
	    for(int i=0;i<32;i++)
	    {
	        result=result+(vec[i]/k);
	        if(vec[i]%k)
	        {
	            result++;
	        }
	    }
	    cout<<result<<"\n";
	}
	return 0;
}
