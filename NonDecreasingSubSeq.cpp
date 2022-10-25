/*ar={1,8,2,5}
      1 2 3 4-->elements
    
    5 2 8 1    
    ---<----
0   0 0 0 0 {}
1   0 0 0 1 {1}         -->1
2   0 0 1 0 {8}         -->2
3   0 0 1 1 {1,8}       -->3
4   0 1 0 0 {2}         -->4
5   0 1 0 1 {1,2}       -->5 
6   0 1 1 0 {8,2}
7   0 1 1 1 {1,8,2}
8   1 0 0 0 {5}         -->6
9   1 0 0 1 {1,5}       -->7
10  1 0 1 0 {8,5}
11  1 0 1 1 {1,8,5}
12  1 1 0 0 {2,5}       -->8
13  1 1 0 1 {1,2,5}     -->9
14  1 1 1 0 {8,2,5}     total 9 non decreasing subsequences
15  1 1 1 1 {1,8,2,5}


sample input:
2
4
1 8 2 5
10
9 7 8 6 5 7 4 3 2 1

sample output:
9
14

*/


#include<bits/stdc++.h>
using namespace std;
bool CB(int i,int j){
    return ((i>>j)&1)==1;
}


bool checkBit(int ar[],int n,int i){
    int prev=INT_MIN;
    for(int j=0;j<=n;j++){
        if(CB(i,j)){
            if(ar[j]<prev)
                return false;
            prev=ar[j];
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }        
        int count=0;
        for(int i=0;i<=((1<<n)-1);i++){
            if(checkBit(ar,n,i)){
                count++;
            }
        }
        cout<<count-1<<endl;
    }
}