#include <iostream>

using namespace std;

void bubble(int *a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>=a[j+1]){
                // swap(a[j],a[j+1]); one line answer
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }

}

int main(){
    int a[]={56,69,3,25,11};
    int n=sizeof(a)/sizeof(a[0]);
    bubble(a,n);
        for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}