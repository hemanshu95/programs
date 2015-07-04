#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    long long s,k;
    for(i=0;i<t;i++)
    {
        scanf("%lld",&s);
        k=(s/20)*21;
        k+=s%20;

        k*=2;
        k%=(1000000007);
        printf("%lld\n",k);
    }
    return 0;
}
