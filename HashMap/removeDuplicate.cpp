#include<bits/stdc++.h>
using namespace std;

vector<int> unique(int* a,int size ){
    vector<int> output;
    unordered_map<int,bool> seen;
    for(int i=0;i<size;i++){
        if(seen.count(a[i])>0)
            continue;
        seen[a[i]]=true;
        output.push_back(a[i]);
    }
    return output;
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> output=unique(a,n);
    for(int x:output){
        cout<<x<<" ";
    }
}