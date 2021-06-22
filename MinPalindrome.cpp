#include<iostream>
using namespace std;
int isPali(int arr[],int n)
{
    int ans=0;
    for(int i=0,j=n-1;i<=j;)
    {
        if(arr[i]==arr[j])
        {
            i++;
            j--;
        }
        else if(arr[i]>arr[j])      // Eg:  3,2  3->i,2->j,   j--; j->3  3+2 i.e arr[j]=arr[j+1]+arr[j]; 
        {
            j--;
            arr[j]=arr[j+1]+arr[j];
            ans++;
        }
        else{
            i++;
            arr[i]=arr[i]+arr[i-1];
            ans++;
        }
    }
    return ans;
}

int main()
{
    int arr[]={1,2,3,2,3,1};
    int n=6;
    cout<< isPali(arr,n);
}