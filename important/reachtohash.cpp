/* * |  |  
     |  | 
     |  |#
     reach the destination calculate the possible no of ways.
 */

#include <bits/stdc++.h>

using namespace std;

int paths(int i,int j,int n){
    if(i<0||j<0||i>=n||j>=n)return 0;
    if(i==n-1&&j==n-1)return 1;
    int ways=0;
    ways+=paths(i+1,j,n);
    ways+=paths(i,j+1,n);
    return ways;    
}

int main(){
    int n;cin>>n;
    cout<<paths(0,0,n);
    return 0;
}