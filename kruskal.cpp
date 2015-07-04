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
int n,m,x,y,r;
vector<pi> node[3000];

set< pair<int,pi> > s;
int subsetsrank[3000],subsetsparent[3000];
int find(int node)
{
    if(subsetsparent[node]!=node)
        subsetsparent[node]=find(subsetsparent[node]);
    return subsetsparent[node];

}
void Union(int xroot,int yroot)
{
    if(subsetsrank[xroot]>subsetsrank[yroot])
        subsetsparent[yroot]=xroot;
    else if(subsetsrank[xroot]<subsetsrank[yroot])
        subsetsparent[xroot]=yroot;
    else
    {
        subsetsparent[yroot]=xroot;
        subsetsrank[xroot]++;
    }

}
void Kruskal()
{
    int sum=0;
    int ed=0;
    frl(i,0,n)
    {
        subsetsrank[i]=0;
        subsetsparent[i]=i;
    }
    while((!s.empty())&&(ed<n))
    {
        pi q=s.begin()->second;
        int x=find(q.first);
        int y=find(q.second);
        if(x!=y)
        {
            ed++;
            Union(x, y);
            sum+=s.begin()->first;
        }
        //if(checkcycle(q)==true)
          //  sum+=s.begin()->first;
        s.erase(s.begin());
    }
    cout<<sum<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        node[i].clear();
    }
    s.clear();
    frl(i,0,m)
    {
        cin>>x>>y>>r;
        node[x-1].push_back({y-1,r});
        node[y-1].push_back({x-1,r});
        s.insert({r,{x-1,y-1}});
    }
    int start;
    cin>>start;
    Kruskal();
    return 0;
}
