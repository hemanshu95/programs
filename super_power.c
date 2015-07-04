#include<stdio.h>
#include<math.h>
int main()
{
    long a,b;
    long long x;
    scanf("%ld",&a,&b);
    x=2;
    for(i=0;i<a;i++)
    {
        x=x%b
        x*=x;
    }
    printf("%lld",&x);
    return 0;
}

