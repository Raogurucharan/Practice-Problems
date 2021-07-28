#include<iostream>
using namespace std;
string HighestFreq(string a, int len)
{
    int count[256]={0};
    int max=0;
    string result;
    for(int i=0;i<len;i++)
    {
        count[a[i]]++;
        if(count[a[i]]>max)
        {
            max=count[a[i]];
            result=a[i];
        }
    }
    return result;
}

int main()
{
    string a;
    cin>>a;
    int len=a.length();
    cout<< HighestFreq(a,len);
}