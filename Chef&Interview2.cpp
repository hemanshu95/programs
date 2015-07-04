#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
long long t,n,k,i,j,product;
long long b[1000],c[1000],x;
long long power(long long a,long long b)
{

    if (b==0)
        return 1;
    else if (b%2==0)
    {
        x=power(a,b/2);
        return x*x;
    }
    else
    {
        x=power(a,(b-1)/2);
        return (x*a)*x;

    }

}
int main()
{

    sd(t);
    while(t-->0)
    {
        for(i=0;i<1000;i++)
        {
            b[i]=0;
            c[i]=0;
        }
        scanf("%lld",&n);
        j=0;
        i=2;
        while(n>1)
        {
        //printf("%d %d %d %d\n",i,b[j],c[j],j);
        //printf("\n%d %d %d%d %d\n",i,b[j],c[j],j);
            if(n%i==0)
            {

                n/=i;

                if(b[j]==i)
                {
                    c[j]++;
                }
                else
                {
                    j++;
                    b[j]=i;
                    c[j]++;
                }
            //printf("%d %d %d %d\n",i,b[1],c[1],j);
                i--;
            }
            i++;
        }
        product=1;
        for(i=1;i<=j;i++)
        {
            //printf("%lld %lld %lld\n",b[i],c[i],(( power(b[i],c[i]+1)- 1 )/(b[i]-1)));
            product*=(( power(b[i],c[i]+1)- 1 )/(b[i]-1));

        }
        printf("%lld\n",product);
    }
    return 0;
}
