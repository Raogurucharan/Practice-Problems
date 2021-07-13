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
    int arr[]={1,2,4,6,7,4,3,3,1,1,8,15,15};
    int size=13;
    vector <int> output= removeduplicate(arr,size);
    for(int i=0;i<output.size();i++)
    {
        cout<<output[i]<<" ";
    }
}

//Here vector is used insttead of array because in case of int arr if we have elemnt like 10 pow 8 then we need to
// create that large element which is not require always hence we use vectors