#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
#define mod 1000000007
using namespace std;

long long pow1(long long m,long long n)
{
    if( n==1 )
        return m%mod;
    long long x=pow(m,n/2);
    if( n%2==0)
    {
        return ((x%mod)*(x%mod))%mod;
    }
    else
        return ((((x%mod)*(x%mod))%mod)*(m%mod))%mod;

}

int main()
{
    ios_base::sync_with_stdio(false);
    int t,n;
    long long a,xo;
    cin>>t;
    while(t-->0)
    {
        xo=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            xo|=a;
        }
        cout<<((xo%mod)*(pow1(2,n-1)))%mod<<endl;
    }
    return 0;
}
