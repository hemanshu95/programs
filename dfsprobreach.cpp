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
bool dfs(int node,vector<bool> &prob,vector<bool> &visited,vector<int> a[],int n)
{

  //  cout<<"visited"<<" "<<node<<endl;
    visited[node]=true;
    frl(i,0,a[node].size())
    {
        if(a[node][i]==n)
        {
            prob[node]=true;
        }
        else if(visited[a[node][i]]==false)
        {
            if(dfs(a[node][i],prob,visited,a,n)==true)
                prob[node]=true;
        }
        else
        {
            if(prob[a[node][i]]==true)
                prob[node]=true;
        }
    }
    if(prob[node]==true)
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,k,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> a[n+1];
        double p[n];
        frl1(i,0,n)
        {
            cin>>k;
            while(k--)
            {
                cin>>x;
                a[i].push_back(x-1);
            }
        }
        frl(i,0,n)
        {
            cin>>p[i];
        }
        vector<bool> prob(n,false),visited(n,false);
        frl(i,0,n)
        {
            if(visited[i]==false)
            {
         //       cout<<"hjbklm"<<i<<" ";
                dfs(i,prob,visited,a,n);
            }
        }
        double s=0;
        frl(i,0,n)
        {
           // cout<<i<<" "<<prob[i]<<endl;
            if(prob[i]==true)
              s+=p[i];
        }
        cout<<(int)s<<endl;
    }
    return 0;
}
