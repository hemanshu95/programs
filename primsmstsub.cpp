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
#include<set>

#define v2d(a,n,m) vector< vector<int> > a(n,vector<int>(m,0))
#define v1d(a,n) vector<int> a(n,0)
#define ve(a) vector<int> a
#define v2e(a) vector< vector<int> > a
#define frl(i,n,m) for(int i=n;i<m;i++)
#define frl1(i,n,m) for(int i=n;i<=m;i++)

using namespace std;
typedef pair<int,int> pi;
int d[3000],n,m,x,y,r,start;
vector<pi> node[3000];
void prim()
{
    fill(d,d+n,INT_MAX);
    set<pi> s;
    d[start]=0;
    frl(i,0,n)
    {
        s.insert({d[i],i});
    }
    int v;
    while(!s.empty())
    {
        v=s.begin()->second;
        s.erase(s.begin());
        for(auto p:node[v])
        {
            int u=p.first,di=p.second;
            if(d[u]>di)
            {
                if(s.erase({d[u],u})>0)
                {
                    d[u]=di;
                    s.insert({d[u],u});
                }
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        node[i].clear();
    }
    frl(i,0,m)
    {
        cin>>x>>y>>r;
        node[x-1].push_back({y-1,r});
        node[y-1].push_back({x-1,r});
    }
    cin>>start;
    prim();
    int s=0;
    frl(i,0,n)
        if(d[i]!=INT_MAX)
            s+=d[i];
    cout<<s;
    return 0;
}
