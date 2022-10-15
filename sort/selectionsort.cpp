#include <iostream>

using namespace std;

void selectionsort(int *a,int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        // swap(a[min],a[i]);
        
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}

int main(){
    int a[]={13,46,24,52,20,9};
    int n=sizeof(a)/sizeof(a[0]);
    selectionsort(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}