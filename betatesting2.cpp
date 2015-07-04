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
typedef pair<int,string> psi;

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    bool flag;
    string s;
    vector<psi> a;
    cin>>n;
    while(n--)
    {
        cin>>s;
        flag=false;
        for(int i=0;i<a.size();i++)
        {
            if((a[i].s1).compare(s)==0)
            {
                //cout<<"hello"<<a[i].f1<<"hi";
                a[i].f1++;
                //cout<<"hello"<<a[i].f1<<"hi";
                flag=true;
                break;
            }
        }
        if(!flag)
        {
            a.push_back({1,s});
        }
    }
    sort(a.rbegin(),a.rend());
    for(auto x:a)
    {
        cout<<x.s1<<" "<<x.f1<<endl;
    }
    return 0;
}
