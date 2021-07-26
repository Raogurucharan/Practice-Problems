// Similar to that of dutch national level problem
#include<iostream>
using namespace std;

void sortArray(int arr[], int n)
{
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high)
    {
        switch (arr[mid])
        {
        case 0:
        swap(arr[low++],arr[mid++]);
        break;

        case 1:
        mid++;
        break;

        case 2:
        swap(arr[mid], arr[high--]);
        break;
        }
    } 
}
void printArray(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[8]={0,1,2,2,0,1,0,2};
    int n=8;
    sortArray(arr, n);
    cout<<"After sorting : ";
    printArray(arr, n);
}
