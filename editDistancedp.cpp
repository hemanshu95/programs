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
int EditDistanceDP(string a,string b)
{
    int m=a.length(),left,top,cor,n=b.length();
    vector< vector<int> > x(m+1,vector<int>(n+1,0));
    for(int i=0;i<=n;i++)
        x[0][i]=i;
    for(int i=0;i<=m;i++)
        x[i][0]=i;

    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            top=x[i-1][j]+1;
            left=x[i][j-1]+1;
            cor=x[i-1][j-1]+(a[i-1]!=b[j-1]);
            x[i][j]=min(min(top,left),cor);
            //cout<<x[i][j]<<" ";
        }
        //cout<<endl;
    }

    return x[m][n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    string a,b;
    cin>>a>>b;
    cout<<EditDistanceDP(a,b);
    return 0;
}
