#include<stdio.h>
int main()
{
    long long t,i,j,l1,l2;
    long  long l,r,d,x=1;
    long long p=1;

    scanf("%lld",&t);
    long long a[t];

    for(i=0;i<t;i++)
    {
        x=1;
        p=1;
        scanf("%lld %lld",&l,&r);
        d=r-l;
        l1=l%10;
        l2=r%10;
        if(d>3 || l==0||l2<l1)
            a[i]=0;
        else
        {
            for(j=l;j<=r;j++)
            {
                p=p*j;
            }
            while(p!=0)
            {
                x=x*(p%10);
                p=p/10;
            }
            a[i]=x;


        }
    }
    for(i=0;i<t;i++)
     {
     printf("%lld\n",a[i]);
    }
    return 0;
}

