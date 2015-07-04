#include<stdio.h>
int main()
{
    int k,i,j,sum;
    long long n,a[4001]={0},q,b[4001]={0};
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%d",&k);
        a[k+2000]++;
    }
    for(i=0;i<4001;i++)
    {
        for(j=0;j<4001;j++)
        {
            b[i]+=a[j]*abs(j+i-4000);
        }
        //printf("%d %lld\n",i-2000,b[i]);
    }
    scanf("%lld",&q);
    sum=0;
    while(q--)
    {
        scanf("%d",&k);
        sum+=k;
        printf("%lld\n",b[sum+2000]);
    }
    return 0;
}
