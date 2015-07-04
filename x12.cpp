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
#define frl1(i,n,m) for(int i=n;i<=m;i++)

using namespace std;
typedef pair<int,int> pi;
int coin_change(ve(a),int m,int n)
{
    v2d(x,n+1,m);
    frl(i,0,m)
        x[0][i]=1;
    frl1(i,1,n)
    {
        frl(j,0,m)
        {
            x[i][j]=((j>=1)?x[i][j-1]:0);
            x[i][j]+=((i-a[j])>=0)?x[i-a[j]][j]:0;
         //   cout<<i<<" "<<j<<" "<<x[i][j]<<endl;
        }
    }
    return x[n][m-1];
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    v1d(a,m);
    frl(i,0,m)
    {
        cin>>a[i];
    }
    cout<<coin_change(a,m,n);
    return 0;
}
