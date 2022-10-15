// calculate the sum of elements of array using recursion

#include <iostream>
#include <vector>

using namespace std;

int sum(int i, vector<int> a)
{
    if (i >= a.size())
    {
        return 0;
    }
    return a[i] + sum(++i, a);
} 

int main()
{
    vector<int> a = {1, 6, 4, 22};
    int n = sizeof(a) / sizeof(a[0]);
    cout << sum(0, a);
    return 0;
}