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
#define c1 "black"
#define c2 "blue"
#define c3 "red"
#define c4 "green"
#define c5 "yellow"
#define c6 "orange"

using namespace std;
typedef pair<int,int> pi;
typedef pair<string,int> psi;

int main()
{
    ios_base::sync_with_stdio(false);
    int t,flag;
    cin>>t;
    string x;
    int a[6];
    while(t--)
    {
        frl(i,0,6)
        {
            cin>>x;
            if(x.compare(c1)==0)
                a[i]=0;
            else if(x.compare(c2)==0)
                a[i]=1;
            else if(x.compare(c3)==0)
                a[i]=2;
            else if(x.compare(c4)==0)
                a[i]=3;
            else if(x.compare(c5)==0)
                a[i]=4;
            else if(x.compare(c6)==0)
                a[i]=5;
        }
        flag=0;
        if(a[2]==a[0]||a[3]==a[0])
            flag++;
        if(a[4]==a[0]||a[5]==a[0])
            flag++;
        if(flag<2)
        {
            flag=0;
            if(a[2]==a[1]||a[3]==a[1])
                flag++;
            if(a[4]==a[1]||a[5]==a[1])
                flag++;
        }
        if(flag==2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
