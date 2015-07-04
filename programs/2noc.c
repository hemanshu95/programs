#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long power1(long long n,long long m)
{
    long long a=1,b,i;
    for(i=0;i<(n/2);i++)
    {
        a*=m;
        a=a%1000000007;

    }
    if(a==0)
        b=1000000006;
    else
        b=a-1;
    printf("%lld\n",(long)((a*b)%1000000007));
    return 0;

}
long long power2(long long n,long long m)
{
    long long a=1,b,i;
    for(i=0;i<n-1/2;i++)
    {
        a*=m;
        a%=1000000007;

    }
    b=(a*m)%1000000007;
    if(a==0)
        a=1000000007;

        a=a-1;
    printf("%lld\n",(a*b)%1000000007);
    return 0;

}

int main() {

   long long t,i;
   long long m,n;

   scanf("%lld",&t);
   for(i=0;i<t;i++)
   {
       scanf("%lld %lld",&n,&m);
       if(n%2==0)
       {
           power1(n,m);
       }
       else
       {
           power2(n,m);
       }

   }
    return 0;
}
