#include <iostream>
#include <cmath>
using namespace std;

int octal_to_decimal(int n){
    int rem =0,d=0,i=0;
    while (n!=0)
    {
        /* code */
        rem=n%10;
        d+=rem*pow(8,i);
        i++;
        n/=10;
    }return d;
}

int decimal_to_binary(int n){
    int rem=0,b=0,i=1;
    while (n!=0)
    {
        /* code */
        rem=n%2;
        b+=rem*i;
        n/=2;
        i*=10;
    }return b;
    
}

int main(){
    int o;
    cin>>o;
    cout<<decimal_to_binary(octal_to_decimal(o));
    return 0;
}