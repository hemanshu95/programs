#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>

using namespace std;
int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);

}
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,r,a[51],g;
    cin>>t;
    while(t-->0)
    {
        cin>>n>>a[0];
        g=a[0];
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            g=gcd(max(a[i],g),min(a[i],g));
        }
        for(int i=0;i<n;i++)
        {
            a[i]/=g;
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
