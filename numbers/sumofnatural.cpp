#include <iostream>
using namespace std;

int natural(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int n;
    cin >> n;
    cout << natural(n);
    return 0;
}