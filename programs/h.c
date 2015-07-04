#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long t,i,k,d;
    scanf("%ld",&t);
    long long n,x;

    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        x=n;
        k=0;
        while(x)
        {
            d=x%10;
            if(d)
                {
                 if(n%d==0)
                      k++;
                  x/=10;
                 }
        }
        printf("%ld",k);

    }
    return 0;
}
