#include<iostream>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    for (int i = 0; i < s.length(); i++)
    {
        cout<<"string : "<<s<<endl;
        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U')){
            s=s.substr(0,i)+s.substr(i+1);
            cout<<"edit :"<<s<<endl;
            i--;
        }
    }
    cout<<s;
    return 0;
}