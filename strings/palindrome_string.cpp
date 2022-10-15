#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s,a;
    cin>>s;
    a=s;
    cout<<a<<" ";
    reverse(s.begin(),s.end());
    cout<<(a==s?"Palindrome":"Not Palindrome");   
    return 0;
}