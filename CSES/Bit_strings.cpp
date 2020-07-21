
#include<bits/stdc++.h>
using namespace std;
int main(void)
{    
    long long int n,a=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        a=(a*2)%1000000007;
    }
    cout<<a<<endl;
}
 
