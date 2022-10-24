#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> m;
    
    //insertion--> pair<>,make_pair(),insert || pair<>,insert() || [key]=value
    pair<string,int> p=make_pair("praveen",5);
    m.insert(p);
    pair<string,int> p2("world",2);
    m.insert(p2);
    m["hello"]=4;
    
    //size
    m.size();
    
    //searching-->using at() || [key]
    cout<<m.at("praveen")<<endl;
    m["praveen"]--;
    cout<<m["praveen"]<<endl;
    
    //erase
    m.erase("praveen");
    cout<<m["praveen"]<<endl;
    
    //Note
    //cout<<m.at("age")<<endl; //searching for key  not present using at() gives exception
    cout<<m["age"]<<endl<<endl; //searching for unpresent key using [key] iniates that key with 0
    

    //iterator
    map<string,int> :: iterator it=m.begin();
    while(it !=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    
    
}