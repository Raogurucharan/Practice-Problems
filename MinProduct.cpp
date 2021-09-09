#include<iostream>
using namespace std;
int minProduct(int A[], int n) {
    int r = A[0];
    int imax = r, imin = r;
    for (int i = 1; i < n; i++) {     
        if (A[i] < 0){
            swap(imax, imin);
        }
        imax = max(A[i], imax * A[i]);
        imin = min(A[i], imin * A[i]);
        r = min(r, imin);
    }
    return r;
}

int main()
{
int a[] = {3,1,-9,-6,3};
int n = sizeof(a)/sizeof(a[0]);
int min_Prod = minProduct(a, n);
cout << "Minimum contiguous Product is : " << min_Prod;
return 0;
}
