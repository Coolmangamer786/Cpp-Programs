/* abc= cba =bca  are know as anagrams contain same no of characters  */

#include <bits/stdc++.h>

using namespace std;

int main(){
    bool flag=true;
    string s1,s2;
    cin>>s1>>s2;
    map<char,int> mp1,mp2;
    for (int i = 0; i < s1.size(); i++)
    {
        mp1[s1[i]]++;
    }
       for (int i = 0; i < s2.size(); i++)
    {
        mp2[s2[i]]++;
    }
    for(auto i:mp1){
        for(auto j:mp2){
            if(i.second!=j.second){
                flag=false;
            }
        }
    }
    cout<<flag;
    return 0;
}