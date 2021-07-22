#include<iostream>
using namespace std;

void CountFrequency(int arr[],int n)
{
    int hashmap[n]={0};
    int i=0;
    while(i<n)
    {
        hashmap[arr[i]-1]++;
        i++;

    }
    for(int i=0;i<n;i++)
    {
        cout<<i+1 <<" : Ocuurs "<<hashmap[i]<<endl;
    }
}

int main()
{
    int arr[]={2,2,4,4,4,5,6,7,7};
    int n=9;
    CountFrequency(arr,n);
}