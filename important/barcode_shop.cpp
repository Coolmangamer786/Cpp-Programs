#include <iostream>

using namespace std;

int max_d(int n){
    int c=n;
    int mx=INT32_MIN;
    while (c!=0)
    {
        int d=c%10;
        mx=max(mx,d);
        c=c/10;
    }
    return mx;
    
}

int main(){
    string s;
    int ans=0;
    cin>>s;
    for (int i = 0; i <s.size(); i++)
    {
        /* code */
        if(isdigit(s[i])){
            ans+=int(s[i])-48;
        }
        else {
            ans+=max_d(int(s[i]));
        }

    }
    cout<<ans;
    
    return 0;
}