#include <iostream>

using namespace std;

int binarySearch(int *a, int t, int n)
{
    int ans = -1;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] > t)
        {
            high = mid - 1;
        }
        else if (a[mid] < t)
        {
            low = mid + 1;
        }
        else
        {
            ans = mid;
            break;
        }
    }
    return ans;
}

int main()
{
    int a[] = {102, 536, 3, 26, 235, 36, 12, 1,234,111,23};
    int n = sizeof(a) / sizeof(a[0]);
    cout << binarySearch(a, 12, n);
    return 0;
}