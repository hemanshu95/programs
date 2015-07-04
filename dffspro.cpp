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
void dfs(int node,vector<bool> &visited,vector<int> a[],int n)
{
   // if(node<n)
   cout<<" "<<node<<endl;
        visited[node]=true;
    frl(i,0,a[node].size())
    {
        dfs(a[node][i],visited,a,n);
            //return true;

    }
    //if(visited[node])
/*
  //  cout<<"visited"<<" "<<node<<endl;
    if(visited[node]==true)
        return false;
    visited[node]=true;
    if(node==n)
        return true;

    frl(i,0,a[node].size())
    {
        if(dfs(a[node][i],visited,a,n)==true)
            return true;

    }
    return false;
*/
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
            int j=0;
            while(j<k)
            {
                cin>>x;

                a[x-1].push_back(j);
                cout<<x-1<<"->"<<j<<endl;
            }
        }
        frl(i,0,n)
        {
            cin>>p[i];
        }
        double s=0;

        vector<bool> visited(n+1,false);

     //   frl(i,0,n)
       // {
         //       cout<<"hjbklm"<<i<<" ";
        dfs(n,visited,a,n);

                    //s+=p[i];
       //     }
        //}
        frl(i,0,n)
        {
           // cout<<i<<" "<<prob[i]<<endl;
            if(visited[i]==true)
              s+=p[i];
        }
        cout<<(int)s<<endl;
    }
    return 0;
}
