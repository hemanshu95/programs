#include<stdio.h>
long long n,a[100001],i,n,t;
int main()
{
    a[0]=1;
    a[1]=3;
    for(i=2;i<100001;i++)
    {
        a[i]=((3*(a[i-1]%1000000007)%1000000007)+(4*(a[i-2]%1000000007)%1000000007))%1000000007;
    }
    scanf("%lld",&t);
    while(t-->0)
    {
        scanf("%lld",&n);

        printf("%lld\n",a[n]);
    }
    return 0;
}
