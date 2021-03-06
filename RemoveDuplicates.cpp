#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector <int> removeduplicate(int arr[], int size)
{
    vector <int> output;
    unordered_map<int,bool> seen;
    for(int i=0;i<size;i++)
    {
        if(seen.count(arr[i])>0)
        {
            continue;
        }
        seen[arr[i]]=true;
        output.push_back(arr[i]);
    }
    return output;
}

int main()
{
    int arr[]={0,0,-2,4,6,7,4,3,3,1,1,8,15,102,112,112,221,11,25};
    int size=19;
    vector <int> output= removeduplicate(arr,size);
    for(int i=0;i<output.size();i++)
    {
        cout<<output[i]<<" ";
    }
}

// Time: O(N)
// Space: O(N)
