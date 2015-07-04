#include<stdio.h>

int main()
{
        int t,i;
        scanf("%d",&t);
        long  long n,p,x;
        long double q;
        for(i=0;i<t;i++)
        {
            scanf("%lld %lld",&n,&p);
            if(n==1)
                q=1/(long double)p;

            else
                {
                    x=(long double)p*(long double)(p+n-2);
                    q=1/x;
                }

            printf("%llf\n",q);
        }
    return 0;
}
