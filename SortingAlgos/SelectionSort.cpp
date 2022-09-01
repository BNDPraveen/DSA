/* sorted part |unsorted part
find the min value in unsorted part and swap it 
       |
       |
sorted |unsorted part
_______|__________
       |^      ^
         <-----min
         
ar: |3 5 1 2 4 3   0-->n-1
     ^   ^
     1|5 3 2 4 3   1-->n-1
       ^   ^
     1 2|3 5 4 3   2-->n-1
         ^
     1 2 3|5 4 3   3-->n-1
           ^   ^
     1 2 3 3|4 5   4-->n-1
             ^
     1 2 3 3 4 5   by the time we reach last element array is sorted

partition i is going from i: 0--->n-2
min value should be found in unsorted part j: i-->n-1  */
         
#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int ar[],int n){
    for(int i=0;i<n-2;i++){
        int idx=i;
        for(int j=i;j<=n-1;j++){
            if(ar[j]<ar[idx]){
                idx=j;
            }
        }
        ar[idx]=ar[idx]^ar[i]^(ar[i]=ar[idx]);
        //swapping ar[idx] <-->ar[i]
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    SelectionSort(a,n);
    return 0;
}