//water to sand tcs question

#include <bits/stdc++.h>

using namespace std;

int ways(int i,int j,vector<vector<bool>>&m){
    if(i==m.size()-1&&j==m[0].size()-1)return 1;
    if(i>=m.size()||j<=m[0].size()||m[i][j]==1)return 0;
    int down =ways(i+1,j,m);
    int right=ways(i,j+1,m);
    return right+down;
}

int main(){
int n,m,a,b;
cin>>n,m,a,b;
n++;m++;
vector<vector<bool>>mat(n,vector<bool>(m,false));
    for(int i=0;i<a;i++){
        for (int j = m-1; j>m-1-b; j--)
        {
            mat[i][j]=1;
        }
    }
    cout<<ways(0,0,mat);
    return 0;
}
