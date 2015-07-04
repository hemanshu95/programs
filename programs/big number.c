#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long g(long long n)
    {long long k1,k2,k3,k4;
    if (n==1 ||n==4)
        return 1;
    if(n==2 || n==3)
        return 3;
    k1=g(n-1)%10000007;
        k2= g(n-2)%10000007;
    k3=g(n-3)%10000007;
    k4=g(n-4)%10000007;
     return (k1+3*k2+ 3*k3 +k4);
}

int main() {

    long long t,n,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
            printf("%lld",g(n));
    }
    return 0;
}
