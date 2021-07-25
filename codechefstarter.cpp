#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a ;
	int b;
	int testcase;
	cin>>testcase;
	int sum=0;
	while(testcase--)
	{
	    cin>>a>>b;
	    sum=a+b;
	    if(sum<3)
	    {
	        cout<< "1"<<endl;
	    }
	    if(3<=sum and sum<=10)
	    { 
	        cout<<"2"<<endl;
	    }
	    if(11<=sum and sum<=60)
	    {
	        cout<<"3"<<endl;
	    }
	    if(sum>60)
	    {
	        cout<<"4"<<endl;
	    }
	}
	return 0;
}
