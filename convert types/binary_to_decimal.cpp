#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    // Syntax: stoi(string s, int position, int base)
    // string b;
    // Easy Method 
    // cout<<"Enter Binary : ";
    // cin>>b;
    // cout<<stoi(b,0,2);

    // int n=b.length(),base=1,ans=0;
    // for (int i = n-1; i >=0; i--)
    // {
    //     if(b[i]=='1'){
    //         ans+=base;
    //     }base*=2;
    // }
    // cout<<ans;
    int b;cin>>b;
    int d=0,i=0,rem;
    while(b!=0){
        rem=b%10;
        d+=rem*pow(2,i);
        b/=10;
        i++;
    }
    cout<<d;
    return 0;
}