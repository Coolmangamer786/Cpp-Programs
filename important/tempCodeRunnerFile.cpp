/*Max and min from a string frequency*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int mn=100,mx=0;
    string s;
    cin>>s;
    unordered_map<int,int>mp;
    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        mp[s[i]]++;
    }
    for(auto i:mp){
cout<<(char)i.first<<" "<<i.second<<endl;
    }

    
    return 0;
}