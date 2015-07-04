#include<stdio.h>
#include<ctype.h>
#include<math.h>
int main()
{
    long long p,q,i=0,n,b,e,x,j,z,k;
    scanf("%lld%lld",&p,&q);
    int a[100001];
    char c='a';
    scanf("%c",&c);
    while(c!='\n')
    {
        scanf("%c",&c);

        a[i]=c-48;
    }
    for(i=0;i<q;i++)
    {
        scanf("%lld%lld",&b,&e);
        b--;
        e--;
        x=0;
        n=0;

        for(j=b;j<=e;j++)
        {
            for(z=j;z<=e;z++)
            {
                for(k=z;k<=e;k++)
                {
                    x*=10;
                    x+=a[j];
                    if(x%p==0)
                        n++;
                }
            }

        }
        printf("%lld",n);

    }
    return 0;
}
