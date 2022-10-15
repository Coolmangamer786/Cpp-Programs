#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << max({a, b, c}) << endl;
    cout << min({a, b, c});
    return 0;
}