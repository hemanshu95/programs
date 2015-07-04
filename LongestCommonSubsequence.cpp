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


using namespace std;
typedef pair<int,int> pi;
string a,b;
int check(int n,int m)
{
    vector< vector<int> > x(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1]==b[j-1])
            {
                x[i][j]=1+x[i-1][j-1];
            }
            else
                x[i][j]=max(x[i-1][j],x[i][j-1]);
        }

    }
    return x[n][m];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin>>a>>b;
    int m=a.length(),n=b.length();
    cout<<check(m,n);
    return 0;
}
