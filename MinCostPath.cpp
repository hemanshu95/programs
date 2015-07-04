#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
#include<bitset>
#include<utility>
#define v2d(a,n,m) vector< vector<int> > a(n,vector<int>(m,0))
#define v1d(a,n) vector<int> a(n,0)
#define ve(a) vector<int> a
#define v2e(a) vector< vector<int> > a
#define frl(i,n,m) for(int i=n;i<m;i++)

using namespace std;
typedef pair<int,int> pi;
int mincostpath(vector< vector<int> > x,int n,int m,pi fp)
{
    v2d(b,n,m);
    b[0][0]=x[0][0];
    frl(i,1,n)
        b[i][0]=b[i-1][0]+x[i][0];
    frl(i,1,m)
        b[0][i]=b[0][i-1]+x[0][i];

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            b[i][j]=x[i][j]+min(b[i-1][j],min(b[i][j-1],b[i-1][j-1]));
        }
    }
    return b[fp.first][fp.second];
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    v2d(a,n,m);
    //vector< vector<int> > a(n,vector<int>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    pi fp;
    cin>>fp.first>>fp.second;
    cout<<mincostpath(a,n,m,fp);
    return 0;
}
