
/*
This problem was asked in Google CodeJam 2019 online qualifier round.

Problem Statement:

Someone just won the Code Jam lottery, and we owe them N jamcoins! However, when we tried to print out an oversized check, we encountered a problem. The value of N, which is an integer,
 includes at least one digit that is a 4... and the 4 key on the keyboard of our oversized check printer is broken.

Fortunately, we have a workaround: we will send our winner two checks for positive integer amounts A and B, such that neither A nor B contains any digit that is a 4, and A + B = N.
 Please help us find any pair of values A and B that satisfy these conditions.
*/
//================================================================================================================================
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t;
	cout<<"THIS IS A PROGRAMM WRITTEN TO AVOID NUMBER 4 WHICH CAN BE WRITTEN INSTEAD AS 3+1"<<endl;
	cout<<"Enter the number of times u want to register the number.....:";
	cin>>t;
	for( int i=0;i<t;i++)
	{
		cout<<"case #"<< i+1 <<":";
		string s;
		cin>>s;
		int n=s.size();
		vector<int>other(n,0);
		for(int j=0;j<n;j++)
		{
			if(s[j]=='4') s[j]='3',other[j]=1;
			
		}
		cout<<"the give number  "<<  s  << "  can be written as..."<<endl;
		cout<<s<<"   +  ";
		int j;
		for(j=0;other[j]==0 && j<n;j++);
		for(;j<n;j++) cout<<other[j];
		cout<<endl;
	}
	return 0;
}
