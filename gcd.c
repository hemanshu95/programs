#include<stdio.h>
int gcd(int a,int b)
{

    int x=b%a;
    if(x==0)
        return a;
    return gcd(x,a);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    a=gcd(a,b);
    printf("%d",a);
    return 0;
}
