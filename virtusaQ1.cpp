#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int first=0;
    int sec=0;
    int i=0;
    int j=n-1;
    if(n/2==0)
    {
    while(i<=j)
    {
        first+=arr[i];
        sec+=arr[j];
        i++;
        j--;
    }
     cout<<"First : "<<first<<endl;
    cout<<"Sec : "<<sec<<endl;
    }
    else
    {
      while(i<j)
    {
        first+=arr[i];
        sec+=arr[j];
        i++;
        j--;
    }  
    }
    cout<<"First : "<<first<<endl;
    cout<<"Sec : "<<sec<<endl;
    if(first>sec)
    {
        cout<<"first";
    }
    else if(first==sec)
    {
        cout<<"DRAW";
    }
    else {
        cout<<"sec";;
    }
}
