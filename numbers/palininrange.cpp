#include <iostream>
using namespace std;

int reverse(int n){
    int res = 0;
    while (n!=0)
    {
        int d=n%10;
        res=res*10+d;
        n=n/10;
    }
    return res;
}

int main()
{
    int max,min;
    cin>>min>>max;
    for (int i = min; i <=max; i++)
    {
        if(reverse(i)==i) cout<<i<<endl;
    }  
    
    return 0;
}