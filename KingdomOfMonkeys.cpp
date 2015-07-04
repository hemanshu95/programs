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
#define f1 first
#define s1 second

using namespace std;
typedef pair<int,int> pi;
typedef pair<string,int> psi;
bool visited[100000];
long long value[100000];
vector <long long> node[100000];

long long t,n,m,x,y,s=0;

void dfs(long long n1)
{
    visited[n1]=true;
    s+=value[n1];
    for(long long nx=0;nx<node[n1].size();nx++)
    {
        if(!visited[node[n1][nx]])
        {
            //s+=value[n];
            dfs(node[n1][nx]);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(long long i=0;i<n;i++)
        {
            node[i].clear();
        }
        for(long long i=0;i<m;i++)
        {
            cin>>x>>y;
            node[x-1].push_back(y-1);
            node[y-1].push_back(x-1);
        }
		for(long long i=0;i<n;i++)
        {
            cin>>value[i];
        }
        fill(visited,visited+n,false);
        long long max1=0;
        for(long long i=0;i<n;i++)
        {
            s=0;
            if(!visited[i])
            {
                dfs(i);
                if(max1<s)
                    max1=s;
            }

        }

        cout<<max1<<endl;
    }
    return 0;
}
