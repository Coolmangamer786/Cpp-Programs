#include <iostream>
using namespace std;

int main()
{
    int n,k;
    int a[]={1,2,3,4,5,6,7};
    cin>>n>>k;
    for(int i=k;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<k;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}