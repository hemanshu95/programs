
#include<stdio.h>
#include<math.h>
int main()
{
    long double pi=22/7;
    long t,i;
    long double a,b,c,p,ar,s;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%llf %llf %llf",&a,&b,&c);
        s=(a+b+c)/2;
        ar=sqrt(s*(s-a)*(s-b)*(s-c));
        p=(ar*pi)/(s*s);
        printf("%llf",p);
    }
    return 0;
}
