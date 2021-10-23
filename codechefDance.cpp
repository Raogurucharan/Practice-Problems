#include<iostream>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    int x,y;
    while(testcase--)
    {
        cin>>x;
        cin>>y;
        int ans;
        if(y>=x)
        {
            if((y-x)%2==0)
            {
                ans=(y-x)/2;
            }
            else{
                ans=(y-x+1)/2 + 1;
            }
        }
        else
        {
            ans=x-y;
        }
        cout<<ans<<endl;
    }
}