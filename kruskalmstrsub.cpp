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
int d[3000],n,m,x,y,r;
vector<pi> node[3000];
vector<int> newgraph[3000];
bool visited[3000];
set< pair<int,pi> > s;
void add(pi p)
{
    newgraph[p.first].push_back(p.second);
    newgraph[p.second].push_back(p.first);
}
void rem(pi p)
{
    newgraph[p.first].pop_back();
    newgraph[p.second].pop_back();
}
bool dfs(int node,int parent)
{
    if(visited[node]==true)
        return false;
    visited[node]=true;
    for(int i:newgraph[node])
    {
        if(i!=parent)
        {
            if(dfs(i,node)==false)
                return false;
        }
    }
    return true;
}
bool checkcycle(pi q)
{

    add(q);
    frl(i,0,n)
    {

        if(dfs(i,i)==false)
        {
            rem(q);
            return false;
        }
    }
    return true;
}

void Kruskal()
{
    int sum=0;
    while(!s.empty())
    {
        pi q=s.begin()->second;
        if(checkcycle(q)==true)
            sum+=s.begin()->first;
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
//    cin>>start;
    Kruskal();
    int s=0;
    frl(i,0,n)
        if(d[i]!=INT_MAX)
            s+=d[i];
    cout<<s;
    return 0;
}
