/*we pick first element of unsorted part insert in sorted part such t
hat sorted part remains sorted and then partition mores forward.It is
repeated until all elements are sorted
partition i goes from i: 1--->n-1
for i element is shifted from: i-1--->0

0<-------i-1  i
3 5 8 10 11 | 7

TimeComplexity
worstCase=O(n2)
bestCase=O(n)

bestCase example
beforesorting ar:5 4 3 2 1
aftersorting  ar: 1 2 3 4 5*/

#include<bits/stdc++.h>
using namespace std;

void insertionSort(int ar[],int n){
    for(int i=1;i<n;i++){
        int x=ar[i];
        int idx=i-1;
        while(ar[idx]>=0 && ar[idx]>x ){
            ar[idx+1]=ar[idx];
            idx--;
        }
        ar[idx+1]=x;
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
    insertionSort(a,n);
}