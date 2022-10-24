#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> v={2,3,4,5,6};
    
    //1 iterator 
    vector<int>:: iterator it1;
    for(it1=v.begin();it1!=v.end();++it1){
        cout<<*it1<<" ";
    }
    cout<<endl;
    //2 auto
    for(auto it=v.begin();it!=v.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    //3 auto
    for(auto value:v){
        cout<<value<<" ";
    }
    cout<<endl;
    
    //4 range based loops
    for(int &value:v){ // &value gives reference of value, if & not used it only gives copy
        cout<<value<<" ";
    }
    cout<<endl;
    
    /************************Iterator point to pairs***************************************/
    
    
    vector<pair<int,int>> vp={{2,3},{3,4},{4,5},{5,6}};
    vector<pair<int,int>>::iterator it2;
    //1 iterator
    for(it2=vp.begin();it2!=vp.end();++it2){
        cout<<(*it2).first<<" "<<(*it2).second<<endl;
    }
    cout<<endl;
    
    //2 auto for pairs
    for(auto &value:vp){
        cout<<value.first<<" "<<value.second<<endl;
    }
    cout<<endl;
    
    //3 auto for pairs
    for(auto it=vp.begin();it!=vp.end();++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;
    
    //4 range based loop
    for(pair<int,int> &value:vp){
        cout<<value.first<<" "<<value.second<<endl;
    }
    
    
    
    
    
}