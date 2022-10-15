#include <iostream>
using namespace std;

// insert at begining
// insert at given pos
// insert at end

void insertbegin(int *a, int n, int val)
{
    for(int i=n-1;i<=0;i--){
        a[i+1]=a[i];
    }
    a[0]=val;
}
void insertend(int *a, int n, int val)
{
    a[n]=val;
}
void insertpost(int *a, int n, int val,int pos){
    for(int i=n;i>=pos;i--){
    a[i]=a[i-1];
    }
    a[pos-1]=val;
}
int main()
{
    int n = 8;
    int arr[9] = {10, 9, 14, 8, 20, 48, 16, 9};
    int value = 69;

    insertbegin(arr, n, value);
    cout << "After inserting the value at beginning:" << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertend(arr, n, value);
    cout << "After inserting the value at end:" << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
int pos=5;
        insertpost(arr, n, value,pos);
    cout << "After inserting the value at post 5:" << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}