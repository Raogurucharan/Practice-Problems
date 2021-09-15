#include <bits/stdc++.h>
#include<iostream>
#include<unordered_map>
using namespace std;

void countFreq(string str, int n)
{
    int finalchar;
    int element=0;
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++)
	mp[str[i]]++;
    for (auto x : mp)
    {
        if(x.second >element){
	   finalchar=x.first;
	   element=x.second;
    }
    cout << x.first << " " << x.second << endl;
    }
    cout<<"The max frequency is "<<element<<" and Element is "<<char(finalchar)<<endl;
}

int main()
{
	string str;
    cin>>str;
    int n=str.length();
	countFreq( str , n);
	return 0;
}
