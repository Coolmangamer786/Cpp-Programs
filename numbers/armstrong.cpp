#include <bits/stdc++.h>
using namespace std;

int power(int b,int e){
    int ans=1;
    for (int i = 0; i < e; i++)
    {
        ans*=b;
    }
    return ans;
    
}

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
        int p=power((int)d,(int)c);
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