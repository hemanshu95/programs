#include<stdio.h>
long long pow1(long a,long b)
{
    if(b==0)
        return 1;
    long long x ;
    x= (long long)a * pow(a,b-1);
    x%=100007;
    return x;
}
int main()
{
    long t,i,s=0,x,y,m,n;
    scanf("%ld",&t);
    int a;
    for(i=0;i<t;i++)
    {
        scanf("%d",a);
        s+=a;
    }
    x=s/t;
    y=x+1;
    n=s%t;
    m=t-n;
    long long q=(pow1(x,m)*pow1(y,n));
    q%=100007;
    printf("%lld",q);

    return 0;
}
