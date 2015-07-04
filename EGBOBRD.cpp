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

int main()
{
    ios_base::sync_with_stdio(false);
    int t,n;
    long long k,last,s,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        last=0;
        s=0;
        frl(i,0,n)
        {
            cin>>x;
            if(last>0)
            {
                if(x==last)
                {
                    last=0;
                    continue;
                }
                else if(last>x)
                {
                    last=last-x-1;
                    continue;
                }
                else
                    x=x-last;
            }
            s+=x/k;
            if(x%k>0)
            {    s+=1;
                last=k-(x%k);
                last--;
            }
            else
                last=0;

        }
        cout<<s<<endl;
    }
    return 0;
}
