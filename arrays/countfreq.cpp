#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map <int,int>m;
   int arr[] = {2,2,3,4,4,2};
   int n = sizeof(arr)/sizeof(arr[0]);
for (int i = 0; i < n; i++)
{
    /* code */
    m[arr[i]]++;
}
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

    return 0;
}