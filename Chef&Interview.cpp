#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
long long t,n,k,i,q;
int main()
{

    sd(t);
    while(t-->0)
    {
        slld(q);
        n=sqrt(q);
        //printf("%lld %lld",q,n);
        k=0;
        if(q>1)
        {
            for(i=1;i<=n;i++)
            {
                if(q%i==0)
                {
                    k+=i;
                    if(i != (q/i))
                        k+=(q/i);
                }
            }
            printf("%lld\n",k);
        }
        else
            printf("1\n");


    }
    return 0;
}
