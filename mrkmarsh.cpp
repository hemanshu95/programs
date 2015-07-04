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
int n,m;
vector< vector<bool> >a(500,vector<bool>(500,false));


int check(int i1,int i2,int j1,int j2)
{
    if(i1==i2 || j1==j2)
        return 0;
    int flag=0,u,l;
    for(int i=i2;i>=i1;i--)
    {
        if(a[i][j1]==false || a[i][j2]==false)
        {
           u=max((i<i2)?check(i+1,i2,j1,j2):0,(i>i1)?check(i1,i-1,j1,j2):0);
            flag=1;
        }
    }
    for(int j=j1;j<=j2;j++)
    {
        if(a[i1][j]==false || a[i2][j]==false)
        {
            l=max((j<j2)?check(i1,i2,j+1,j2):0,(j>j1)?check(i1,i2,j1,j-1):0);
            flag=1;
        }
    }
   // cout<<flag<<" ";
    if(flag==1)
        return max(u,l);
    else
        return 2*(i2-i1+j2-j1);
}

int main()
{
    ios_base::sync_with_stdio(false);

    char c;
    cin>>n>>m;
   // cout<<n<<" "<<m;

    frl(i,0,n)
    {
        frl(j,0,m)
        {
            cin>>c;
         //   scanf("%c",&c);
            if(c==46)
                a[i][j]=true;
        }
        //cin>>c;
    //    scanf("%c",&c);
    }

    int x=check(0,n-1,0,m-1);
    if(x>0)
        cout<<x;
    else
        cout<<"impossible";
    return 0;
}
