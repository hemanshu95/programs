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

int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,x,s;
    cin>>t;
    deque<int> k;
    while(t--)
    {
        cin>>n;
        v1d(a,n);
        frl(i,0,n)
            cin>>a[i];

        frl(i,0,n)
            while(1)
            {
                if(k.size()==0||k.back()>=a[i])
                {
                    k.push_back(a[i]);
                    break;
                }
                else
                    k.pop_back();

            }
        s=0;
        frl(i,0,n)
        {
            if(k.size()>0)
            {
                if(a[i]<k.front())
                    s+=k.front()-a[i];
                else
                    k.pop_front();
            }
            else
            {
                break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
