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
vector< vector<int> > a(41,vector<int>(41,0));

void nCr()
{
    a[0][0]=1;
    for(int i=1;i<=40;i++)
    {
        a[i][0]=1;
        for(int j=i;j>0;j--)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }

    }

}
int noprime(int s)
{
    vector<bool> k(s+1,true);
    int n=0;
    if(s==1)
        return 0;
    for(int i=2;i<=s+1;i++)
    {
        if(k[i]==true)
        {
            n++;
            for(int j=2*i;j<=s;j++)
            {
                k[j]=false;
            }
        }
    }
    return n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,m,fs,os;
    nCr();
    long long s,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        fs=n/4;
        os=n%4;
        s=0;
       // cout<<fs<<" "<<os<<endl;
        while(fs>=0)
        {
            s+=a[fs+os][fs];
            fs--;
            os+=4;
        }
     //   cout<<s<<" ";
        cout<<noprime(s)<<endl;
    }
    return 0;
}
