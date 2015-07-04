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
long long nw(int cur,int d,int m)
{
    if(m==0)
        return 0;
    if(cur==1 )
        return 1+nw(cur+1,d,m-1);
    if(cur==d)
        return 1+nw(cur-1,d,m-1);
    return 2+nw(cur+1,d,m-1)+nw(cur-1,d,m-1);
}
int p[10],d[10];

int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,m;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>m;
        //cin>>c;
        for(int i=0;i<n;i++)
        {
        //    cout<<i;
            cin>>p[i];
               cout<<p[i];

        }
        //cin>>c;
        for(int i=0;i<n;i++)
        {
          //  cout<<i;
            cin>>d[i];
            cout<<d[i];
        }
        cout<<nw(p[0],d[0],m)<<endl;
    }
    return 0;
}
