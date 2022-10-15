#include <iostream>
#include <cmath>
using namespace std;

int binary_to_decimal(int n){
    int rem=0,d=0,i=0;
    while(n!=0){
        rem=n%10;
        d+=rem*pow(2,i);
        i++;
        n/=10;
    }return d;
}

int decimal_to_octal(int n){
    int rem=0,o=0,i=1;
    while (n!=0)
    {
        /* code */
        rem=n%8;
        o+=rem*i;
        n/=8;
        i*=10;
    }return o;
    
}

int main(){
    int b;
    cin>>b;
    cout<<decimal_to_octal(binary_to_decimal(b));
    return 0;
}