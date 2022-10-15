#include <iostream>

using namespace std;

int product_dig(int &n){
    int p=1;
    while (n!=0)
    {
        int d=n%10;
        p*=d;        
        n/=10;
    }
    return p;
}

int main(){
    int s;
    cin>>s;
    cout<<product_dig(s);
    return 0;
}