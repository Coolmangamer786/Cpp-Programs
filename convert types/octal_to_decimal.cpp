#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int o,rem=0,d=0,i=0;
    cin>>o;
    while (o!=0)
    {
        /* code */
        rem=o%10;
        o/=10;
        d+=rem*pow(8,i);
        i++;
    }
    cout<<d;

    return 0;
}
