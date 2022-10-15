/* Problem to get increasing and decreasing  /\ if possible you can rearrange the number to get the sol
Logic
 max cannot repeat two times - > then false
 other number cannot repeat more than 2 times - > false
 otherwise true
 sol - https://www.youtube.com/watch?v=qGUduVU-25A
 */

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n, mx = 0;
    bool flag=true;
    unordered_map<int, int> mp;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
        mp[a[i]]++;
        mx = max(mx, a[i]);
    }
    for (auto i : mp)
    {
        if ((i.first == mx && i.second > 1) || (i.second > 1))
        {
            flag=false;
            break;
        }
    }
                
cout<<flag;
    return 0;
}