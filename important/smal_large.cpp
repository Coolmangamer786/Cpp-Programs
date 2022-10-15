/*smallest from thousand
largest from hundred
smallest from tens
largest from ones
*/

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int main(){
    int a,b,c,ans=0,d=1;
    cin>>a>>b>>c;

    for (int i = 0; i < 4; i++)
    {
        /* code */
        if(i%2==0){
            ans+=pow(10,i)*max({a%10,b%10 ,c%10});
        }else{
            ans+=pow(10,i)*min({a%10,b%10,c%10});
        }
        a/=10;
        b/=10;
        c/=10;
    }
    cout<<ans;
    

return 0;
}