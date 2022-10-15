#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int v=0,c=0,sp=0;
    
    for (int i = 0; i < s.size(); i++)
    {
        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U')){
            v++;
        }
        else if(s[i]==' '){
            sp++;
        }
        else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
            c++;
        }
    }
    cout<<"Vowels : "<<v<<"\n";
    cout<<"Consonents : "<<c<<"\n";
    cout<<"Space : "<<sp<<"\n";
    
    return 0;
}