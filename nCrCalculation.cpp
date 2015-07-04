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
#include<limits.h>

#define v2d(a,n,m) vector< vector<int> > a(n,vector<int>(m,0))
#define v1d(a,n) vector<int> a(n,0)
#define ve(a) vector<int> a
#define v2e(a) vector< vector<int> > a
#define frl(i,n,m) for(int i=n;i<m;i++)
#define frl1(i,n,m) for(int i=n;i<=m;i++)

using namespace std;
typedef pair<int,int> pi;
vector< vector<int> > a(41,vector<int>(41,0));

void nCr(int n,int r)
{
    a[0][0]=1
    for(int i=1;i<=40;i++)
    {
        a[i][0]=1;
        for(int j=i;j>0;j--)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }

    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    return 0;
}
