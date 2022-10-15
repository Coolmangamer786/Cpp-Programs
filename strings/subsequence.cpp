#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sub(string i,string o,vector<string>&s){
    if(i.empty()){
        s.push_back(o);
        return ;
    }
    sub(i.substr(1),o+i[0],s);
    sub(i.substr(1),o,s);
    
}

int main(){
    vector<string>s;
    string inp,out;
    cin>>inp;
    sub(inp,out,s);
    sort(s.begin(),s.end());
    for(auto i:s){
        cout<<i<<" ";
    }
    return 0;
}