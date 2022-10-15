/*Max and min from a string frequency*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int mn=100,mx=0;
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    vector <char> more,less;
    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        mp[s[i]]++;
    }
    for(auto i:mp){
       mx= max(i.second,mx);
       mn=min(i.second,mn);
    }
    for(auto j:mp){
        if(j.second==mx){
           more.push_back(j.first);
        }
        if(j.second==mn){
           less.push_back(j.first);
        }
    }
cout<<"Most occured "<<" ";
for(auto i:more)cout<<i;
cout<<"\n"<<"Least occured "<<" ";
for(auto i:less)cout<<i;

    return 0;
}