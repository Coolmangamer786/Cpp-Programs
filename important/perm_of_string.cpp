/*Example
abc
6
abcc
12
Formula to calculate permutations total_chars!/no.repeting_chars!;
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        mp[s[i]]++;
    }

    int ans = fact(s.size());
    for (auto i : mp)
    {
        ans = ans / fact(i.second);
    }
    cout << ans;
    return 0;
}