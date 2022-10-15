#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n)
{
    int res = 0, c;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return false;

    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout << prime(n);
    return 0;
}