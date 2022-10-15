#include <iostream>
#include <cmath>
using namespace std;

int power(int b,int e){
    int ans=1;
    for(int i=0;i<e;i++){
        ans*=b;
    }return ans;
}

bool arms(int n){
    int org=n;
    int num=n,ans=0;
    int c=0;
    //no. of digits
    while (n!=0)
    {
        n/=10;
        c++;
    }
    cout<<c<<endl;
    //
   while (num!=0)
   {
    /* code */
    int d=num%10;
    ans+=power(d,c);
    num/=10;
   }
   cout<<ans<<endl;
   
    cout<<" = "<<org;
    return org==ans;
    
    
}

int main(){
    int n;cin>>n;
    cout<<arms(n);
    return 0;
}