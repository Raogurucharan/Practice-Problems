/*
 SORT THE STRING IN THESE CONDITIONS:
1)  Smaller letter shold come first in sorted order (a-z)
2)  Larger letters should come next in sorted order (A-Z)
3)  Numbers should come next but odd numbers should be placed first then the even numbers 
Eg:
   i/p: ekTRYFFoi876
   o/p: eikoFFRTY786
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
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
