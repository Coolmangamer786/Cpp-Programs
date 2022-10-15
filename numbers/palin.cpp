#include <iostream>

using namespace std;


int reverse(int n)
{
  int r = 0;
  while (n != 0){
    int d=n%10;
    r=r*10+d;
    n=n/10;
  } 
  return r;
}
int main()
{
  int n;
  cin >> n;
  if(reverse(n)==n){
    cout<<"Palin";
  }else cout<<"not Palin";

  return 0;
}