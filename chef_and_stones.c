#include<stdio.h>
struct n{
    //long
};
int main()
{
    long long t,n,k,x,max,i,d;

    scanf("%lld",&t);
    while(t-->0)
    {
        scanf("%lld%lld",&n,&k);
        long a[n],b[n];
        max=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%ldl",&b[i]);
            x=k/a[i];
            d=x*b[i];
            if(d>max)
                max=d;
        }
        printf("%lld\n",max);
    }
    return 0;
}
