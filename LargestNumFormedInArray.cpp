// Time : IN best case O(N*logN) else
//Time complexity: O(nlogn * len(longest string))

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool comparator(string first,string second)
{
    string one = first+second;
    string two = second+first;
    
    int i=0;
    while(one[i] && two[i])
    {
        if(one[i]>two[i])
            return true;
        else if(one[i]<two[i])
            return false;
        ++i;
    }
    
    return false;
}

int main() {
	//code
	int tc;
	cin>>tc;
	while(tc--)
	{
	   int len;
	   vector<string> arr;
	   
	   //Take Array inputs
	   int i;
	   string temp;
	   cin>>len;
	   for(i=0;i<len;++i)
	   {
	       cin>>temp;
	       arr.push_back(temp);
	   }
	   sort(arr.begin(),arr.end(),comparator);
	    
	   for(i=0;i<len;++i)
	       cout<<arr[i];
	   cout<<"\n";
	}
	return 0;
}
