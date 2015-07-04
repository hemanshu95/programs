#include<stdio.h>
int main()
{
    int t,j,a1[32],b1[32];
    unsigned long x[32],a,b,m,n,ans;
    x[0]=1;
    for(j=1;j<32;j++)
    {
        x[j]=2*x[j-1];
    }
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%lu%lu",&a,&b);
        j=-1;
        m=a;
        n=b;
        while(++j<32)
        {
            a1[j]=m%2;
            b1[j]=n%2;
            m/=2;
            n/=2;
        }
        ans=0;
        for(j=0;j<32;j++)
        {
            if(a1[j] && b1[j] && b-a<x[j])
                ans+=x[j];

        }
        printf("%lu",ans);

    }
    return 0;
}
