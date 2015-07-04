#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define mod 1000000007
int main()
{
    //min1*(min1+1)
    int t;
    long long x,y,z,m,n,min1,S,R;
    scanf("%d",&t);
    while(t-->0)
    {
        S=0;
        cin>>m>>n;
        min1=min(m,n);
        x=min1;
        y=min1-1;
        z=(2*min1)-1;
        if(x%2==0)
            x=x/2;
        else
            y=y/2;
        R=(((((min1%mod)*(m%mod))%mod)*(n%mod))%mod);
        S+=R;
        S%=mod;

        //cout<<min1<<" "<<m<<" "<<n<<" "<<R<<" "<<S<<"\n";
        R=((((x%mod)*(y%mod))%mod)*(((m%mod)+(n%mod))%mod))%mod;
        if(R>0)
        R=mod-R;
        S+=R;
        S%=mod;


        //cout<<R<<" "<<S<<"\n";

        if(x%3==0)
            x/=3;
        else if(y%3==0)
            y/=3;
        else
            z/=3;
        R=(((((x%mod)%mod)*((y%mod)%mod))%mod)*((z%mod)%mod))%mod;
        S+=R;
        S%=mod;
        S*=2;
        S%=mod;

        //cout<<R<<" "<<S<<"\n"<<"now";
        cout<<S<<endl;
    }
    return 0;
}
