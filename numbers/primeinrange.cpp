#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n){
     if (n == 1)
    return false;
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n%i==0)return false;
    }
    return true;
    
}

int main(){
    int min,max;

    cin >> min >> max;
    for (int i = min; i <= max; i++)
    {
        if(prime(i)){
            cout<<i<<endl;
        }
    }
    
    return 0;
}