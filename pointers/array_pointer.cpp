#include <bits/stdc++.h>
using namespace std;
void pointer()
{
    // Declare an array
    int v[3] = {10, 100, 200};

    // declare pointer variable
    int *ptr;

    // Assign the address of v[0] to ptr
    ptr = v; // v or &v[0] both are same

    for (int i = 0; i < 3; i++)
    {
        cout << "Value at ptr = " << ptr << "\n";
        cout << "Value at *ptr = " << *ptr << "\n";

        // Increment pointer ptr by 1
        ptr++;
    }
}

// run the program
int main()
{
    pointer();
}
