/*example inp1=220 inp2=284 Explaination :  sum of factors of 220 = sum of factors of 284
out = true
*/

#include <iostream>

using namespace std;

int sum_fac(int &n){
    int sum=0;
    for (int i = 1; i < n; i++)
    {
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}

int main(){
    int n1,n2;
    cin>>n1>>n2;
    if((sum_fac(n2)==n1)&&(sum_fac(n1)==n2)){
    cout<<"True";}
    else
    cout<<"False";
    return 0;
}