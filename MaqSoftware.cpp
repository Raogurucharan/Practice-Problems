#include <iostream>
#include<bits/stdc++.h>
using namespace std;//Do not remove this;
int main()
{
   string a;
  cin>>a;
  string str="";
  string capstr="";
  string numstr="";
  string after="";
  int n=a.length();
  for(int i=0;i<n;i++)
  {
    if(a[i]>='a' and a[i]<='z')
    {
      str=str+a[i];
    }
     if(a[i]>='A' and a[i]<='Z')
    {
      capstr=capstr+a[i];
    }
    if(isdigit(a[i]))
                 {
                   if(a[i]%2!=0)
                   {
                     numstr=numstr+a[i];
                   }
                   else
                     after=after+a[i];
                 }
  }
  sort(str.begin(), str.end());
  sort(capstr.begin(), capstr.end());
  cout<< str+capstr+numstr+after;

}