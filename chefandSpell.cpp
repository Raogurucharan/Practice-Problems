#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test>0)
    {
        long long int i,size,s=0;
        unordered_map<long long int,int> m;
        cin>>size;
        long long int arr[size];
        for(int i=1;i<=size;i++)
        {
            cin>>arr[i];
            m[arr[i]]=0;
        }
        for(int i=1;i<=size;i++)
        {
            m[arr[i]]++;
        }
        for(auto a : m)
        {
            if(a.second > 1)
            {
                long long int c=(size-a.second);
                c=c*(a.second);
                s=s+c;
            }
            else{
                s=s+size-1;
            }
        }
        cout<<s<<endl;
        test--;
    }
    return 0;
}

/*
2
3
4 2 4
6
2 8 6 2 1 5
 
op:
4
28

  Ai−Aj/ Ai< Ai−Aj/ Aj
*/