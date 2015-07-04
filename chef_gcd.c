#include<stdio.h>
long long gcd(long long a,long long b)
{

    long long x=b%a;
    if(x==0)
        return a;
    return gcd(x,a);
}
int main()
{
    long long t,n,q,i,j;
    scanf("%I64d",&t);
    long long g=0;
    while(t-->0)
    {

        scanf("%I64d%I64d",&n,&q);
        long long  a[n],l,r;
        for(i=0;i<n;i++)
        {
            scanf("%I64d",&a[i]);
        }
        for(j=0;j<q;j++)
        {
            g=0;
            scanf("%I64d%I64d",&l,&r);
            l--;
        //r;
            for(i=0;i<l;i++)
            {
                if(g==0)
                    g=a[i];
                else if (g==1)
                {
                    printf("1\n");
                    continue;
                }
                else
                {
                    if(g<a[i])
                        g=gcd(g,a[i]);
                    else
                        g=gcd(a[i],g);
                }
            }
            for(i=r;i<n;i++)
            {
                if(g==0)
                    g=a[i];
                else if (g==1)
                {
                    printf("1\n");
                    continue;
                }
                else
                {
                    if(g<a[i])
                        g=gcd(g,a[i]);
                    else
                        g=gcd(a[i],g);
                }
            }
            printf("%I64d\n",g);
        }
    }
        return 0;
}
