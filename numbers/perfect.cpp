#include <iostream>
using namespace std;

bool perfect(int n){
    int res=0,org=n;
    for(int i=1;i<n;i++){
    if(org%i==0){
        res+=i;
    }
    }
    return res==n;

}

int main()
{
    int i;
    cin>>i;
    cout<<perfect(i);
    return 0;
}