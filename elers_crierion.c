#include<stdio.h>
#include<math.h>
long long powe1(long long a,long long m,long long n)
{

    if(m==1)
        return a;
    long long x;
    if(m%2==0)
    {
        x=powe1(a,m/2,n);
        x=(x*x)%n;
        return x;
    }
    else
    {
        x=powe1(a,(m-1)/2,n);
        x=(x*x)%n;
        x=(x*a)%n;
        return x;
    }
}

int main()
{
    long t,i;
    long long a,m,r;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&a,&m);
        if(m==2||a==0)
        {
            printf("YES\n");
            continue;
        }
        else
        {
            long long q=(m-1)/2;
            r=powe1(a,q,m);
            if(r==1)
                printf("YES\n");
            else if(r==m-1)
                printf("NO\n");
        }

    }
    return 0;
}
