#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
unsigned long long hcf(unsigned long long a,unsigned long long b)
{
    if(a%b==0)
        return b;
    else
        return hcf(b,a%b);
}
int main()
{
    int t;
    unsigned long long hc,a,b;
    sd(t);
    while(t-->0)
    {
        //scanf("%uld %uld",&a,&b);
        cin>>a>>b;
        if(b==1 || a==b)
        {
            printf("Yes\n");
            continue;
        }
        if(a==1)
        {
            printf("No\n");
            continue;
        }
        hc=hcf(max(a,b),min(a,b));
        while(b>1 && hc>1)
        {
            b/=hc;
            hc=hcf(max(hc,b),min(hc,b));
        }
        if(b==1)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
