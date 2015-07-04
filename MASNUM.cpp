#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
int main()
{
    int t,i,n;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        if(n==1)
            cout<<"1\n";
        else if(n%2==1)
            cout<<"0\n";
        else
        {
            cout<<"9";
            for(i=1;i<(n/2);i++)
                cout<<"0";
            cout<<"\n";
        }
    }
    return 0;
}
