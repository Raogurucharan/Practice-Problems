#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a;
        cin>>b;
        cin>>c;
	    if(a==b and b==c)
	    {
	        cout<<"0"<<endl;
	    }
	    else
	    cout<<"1"<<endl;
	}
	return 0;
}
