#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[]={2,5,1,7};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    if(n%2!=0){
   cout<<a[n/2];
    }
    else{
      
        cout<<((float)(a[n/2]+a[n/2-1])/2);
    }
    
 
    return 0;
}