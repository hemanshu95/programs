#include<stdio.h>
long long calc(long long a ,long long b)
{
    if(a==0 && b==0)
        return 0;
    else if(a==0)
        a++;
    long long i,j,x,t=b-a+1,Z,M,L;
    long p[32],k,q[32]={},flag;

    for(i=a,j=0;i<=b;i++,j++)
    {
        x=i;
        for(k=0;k<32;k++)
        {
            p[k]=x%2;
            x/=2;
            if(i==a)
            {
                q[k]=p[k];
                continue;
            }
            if(q[k]==1)
            {
                if(p[k]==0)
                    q[k]=0;
            }
        }
   }

    M=1;
    Z=0;
    for(L=0;L<32;L++)
    {
        Z+=(q[i]*M);

        M*=2;
    }
       // if(Z==0)
            //break;

    return Z;
}
int main()
{
    long long x,a,b;
    long long t,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld",&a,&b);
        printf("%lld\n",calc(a,b));
    }
    return 0;
}
