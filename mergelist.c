#include<stdio.h>
int main()
{
    int t,i,j,n,a[200],m,max1,min1;
    scanf("%d",&t);
    long long s,q;
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n,&m);
        s=1;
        q=1;
        if(n>m)
        {
            max1=n;
            min1=m;
        }
        else
        {
            max1=m;
            min1=n;
        }
        j=0;
        for(i=n+m;i>max1;i--,j++)
            a[j]=i;
        a[j]=0;
        for(i=min1;i>1;i--)
        {
            for(j=0;;j++)
            {
                if(a[j]%i==0)
                {
                    a[j]/=i;
                    break;
                }
            }

        }
        j=0;
        while(a[j]!=0)
        {
            s*=a[j];
            s%=1000000007;
            j++;
        }


        printf("%lld\n",s);
    }
    return 0;
}
