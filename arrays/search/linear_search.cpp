#include <iostream>

using namespace std;

int linerSearch(int *a, int t, int n)
{
    int ans =-1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == t)
        {
            ans=i;
            break;
        }
    }
    return ans;
    
}

int main()
{
    int a[] = {102, 536, 3, 26, 235, 36, 12, 1};
    int n = sizeof(a) / sizeof(a[0]);
    cout << linerSearch(a, 12,n);
    return 0;
}