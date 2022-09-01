/* ar: 3 4 5 7 8 (*say non-decreasing order |don't say increasing)
   ar: 9 7 5 3 2 (*say non-increasing order |don't say decreasing)
   
for array of size n 
1)we must make n-1 passes
2)for ith pass we must go to n-i-1

ar: 5 1 3 2 8 
1st pass:
5 1 3 2 8
^
1 5 3 2 8
  ^
1 3 5 2 8
    ^
1 3 2 5 8
      ^
2nd pass:
1 3 2 5 8
^
1 3 2 5 8
  ^
1 2 3 5 8
    ^

swapping without third value
a=3 b=5
a=a+b; // 8=3+5
b=a-b; // 3=8-5
a=a-b; // 5=8-3

swapping in single line
a=a^b^(b=a)
 =3^5^(3=3) [since p^p=0, 3^3 gets cancel]
 =5
 
TimeComplexity= n(n-1)/2

   i        j           iterations
   1       [0-->n-2]     n-1
   2       [0-->n-3]     n-2
*/ 
 #include<bits/stdc++.h>
using namespace std;

void bubblesort(int a[],int n){
    int count =0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
void printArray(int* a,int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubblesort(a,n);
    printArray(a,n);
    return 0;
}
 
 
 