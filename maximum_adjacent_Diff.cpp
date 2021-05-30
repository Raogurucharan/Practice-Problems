#include <bits/stdc++.h>
using namespace std;
int max_adj_Diff(int A[],int size){
   int MaxD=A[1]-A[0];
   for(int i=1;i<size-1;i++){
      if(A[i+1]-A[i] > MaxD)
         MaxD=A[i+1]-A[i];
   }
   return MaxD;
}
int main(){
   int Arr[]={1,5,2,18,20,13};
   int n=6;
   sort(Arr,Arr+n); 
   int md=max_adj_Diff(Arr,6);
   cout<<"Maximum adjacent difference in array in its sorted form :"<<md;
   return 0;
}
