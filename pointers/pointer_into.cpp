#include <iostream>
using namespace std;



int main(){
    int num=25;

    int *ptr; // this is the pointer

    ptr=&num;  //storing the address of num

    // printing the result
    cout<<"original num : "<<num <<endl;
    cout<<"pointer address : "<<ptr<<endl;
    cout<<"pointer value reference: "<<*ptr<<endl;
    return 0;
}