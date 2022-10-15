#include <iostream>
#include <math.h>
using namespace std;

int arm(int n)
{
    int res = 0, c = 0, t = n;
    while (t != 0)
    {
        c++;
        t = t / 10;
    }
    cout<<c<<endl;
    while (n != 0)
    {
        int d = n % 10;
        cout<<"d = " <<d<<endl;
        int p=pow(d,c);
        cout<<"p = " <<p<<endl;
        res += p;
        cout<<"res = " <<res<<endl;
        n = n / 10;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    if (arm(n) == n)
    {
        cout << n << " is armstrong "<< endl;
    }
    else
        cout << n << " is not armstrong "<< endl;
    return 0;
}