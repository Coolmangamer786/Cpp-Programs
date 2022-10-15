/* 9 4
9 1 10 1 2 5 99 1 31
2 1 9 5
*/

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    map<int, int> mp;
    cout << "Enter Array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    int j = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        while (mp[b[i]] > 0)
        {
            a[j] = b[i];
            mp[b[i]]--;
            j++;
        }
    }

    for (auto &m : mp)
    {
        while (m.second > 0)
        {
            a[j] = m.first;
            j++;
            m.second--;
        }
    }
    for (auto v : a)
    {
        cout << v << " ";
    }

    return 0;
}