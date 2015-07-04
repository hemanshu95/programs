#include<stdio.h>
#include<math.h>
int main()
{
    double s,y,z;
    long long x,k,q;
    int t,i,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&x,&k);
        n=0;
        q=k;
        if(q==1)
        {
            printf("%lf\n",(double)x/2);
            continue;
        }
        while((q/2)!=1)
        {
            n++;
            q/=2;
        }
        q=pow(2,n);
        y=2*(double)q;
        z=(double)k;
        s=(((z+1)/y)-1-(1/(2*y)))*x;
        printf("%lf\n",s);
    }
    return 0;
}
