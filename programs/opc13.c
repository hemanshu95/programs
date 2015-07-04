#include<stdio.h>
#include<math.h>
long long power(int x,long long y)
{
    long long t=1;
    while(y>0)
    {
        t*=x;
        y--;
    }
    return t;
}
long long rec(long long n)
{
    if(n==0 || n==1)
        return 0;
    long long x=(power(3,n-2)% 1000000007);
    return (2*(rec(n-1)+rec(n-2))+x);

}
int main()
{
    int t,i;
    long long n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);

        printf("%lld",rec(n));
    }
    return 0;
}
