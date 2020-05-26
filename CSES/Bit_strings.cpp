/*
https://cses.fi/problemset/task/1617
*/
#include<bits/stdc++.h>
using namespace std;
int main(void)
{    
    long long int n,ans=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ans=(ans*2)%1000000007;
    }
    cout<<ans<<endl;
}
 
