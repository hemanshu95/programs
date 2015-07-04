#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    long long d,p,q;
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld",&d,&p);
        if(d<0)
        {
            printf("0\n");
            continue;
        }

        q=(d*d)+4*p;
        if(d==0)
        {
            long long x=(long long)sqrt((double)q);
            if(x*x==q && p>0)
                printf("2\n");
            else if(p==0)
                printf("1\n");
            else
                printf("0\n");

            continue;

        }
        if(q>0)
        {
            long long x=(long long)sqrt((double)q);
            if(x*x==q)
                printf("4\n");
            else
                printf("0\n");

            continue;


        }
        if(q==0)
        {
            printf("2\n");
        }
        if(q<0)
        {
            printf("0\n");
        }

    }
    return 0;
}



