#include <iostream>

using namespace std;

void insertBegin(int *arr,int n,int v){
    for (int i = n; i >=0; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=v;
    
}

int main(){
    int v=69,n;
    int arr[]={15,436,26,36,625};
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array : "<<endl;
    for(auto i:arr){
        cout<<i<<" ";
    }
    insertBegin(arr,n,v);
    cout<<"After inserting :" <<endl;
    for(auto i:arr){
        cout<<i<<" ";
    }

    return 0;
}

