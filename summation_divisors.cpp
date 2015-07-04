#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long t,n,n2;
    long long s;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        n2=sqrt(n);
        s=1;
       // cout<<n2<<" ";
        if(n==1||n==0)
        {    cout<<0<<endl;
            continue;
        }
        if(n==2)
        {
            cout<<1<<endl;
            continue;
        }
        for(long long i=2;i<n2;i++)
        {
            if(n%i==0)
                s+=(i+n/i);

        }
        if(n%n2==0 && n2!=1)
        {
            s+=n2;
            if(n2!=(n/n2))
                s+=(n/n2);
        }
        cout<<s<<endl;
    }
    return 0;
}
