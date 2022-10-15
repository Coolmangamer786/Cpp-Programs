#include <iostream>
#include <map>
#include <vector>
using namespace std;



// int main()
// {
//     map <int,int> m;
//     vector<int>v={1,1,1,2,2,3,3,3,3,4,4};
//     for(auto i:v){
//         m[i]++;
//     }
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
    
//     }
    
//     return 0;
// }

int main(){
    int a[11]={1,1,1,2,2,3,3,3,3,4,4};
    int n=sizeof(a)/sizeof(a[0]);
    int i=0;
    for(int j=1;j<n;j++){ 
if(a[i]!=a[j]){
    i++;
    a[i]=a[j];
}
    }

    for (int k = 0; k < i+1; k++)
    {
        cout<<a[k]<<" ";
    }
    
}