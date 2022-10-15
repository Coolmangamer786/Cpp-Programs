#include <iostream>

using namespace std;

int main(){
    int d,i=1,rem=0,o=0;
    cin>>d;
    while (d!=0)
    {
        /* code */
        rem=d%8;
        o+=rem*i;
        i*=10;
        d/=8;
    }
    cout<<o;
    
    return 0;
}