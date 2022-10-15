#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// using vectors O(nlogn)
// int main()
// {
//     int n;
//     vector<int> v;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int m;
//         cin >> m;
//         v.push_back(m);
//     }
//     sort(v.begin(), v.end());
//     cout <<"Smallest : "<< v[0]<<" Largest : "<<v[n-1];
//     return 0;
// }

// using array o(n)

int main(){
    int n,a[10];
cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
int max=a[0],min=a[0];
    for (int j = 0; j < n; j++)
    {
        /* code */
        if(a[j]>max){
            max=a[j];
        }
        if(a[j]<min){
            min=a[j];
        }
    }
    
    cout << "Maximum : " << max << " Minimum : " << min;
    
    return 0;
}