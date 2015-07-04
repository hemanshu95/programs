#include<stdio.h>
int main()
{
    int n,m,k,i,j,r,l=0;
    scanf("%d%d%d",&n,&m,&k);
    int a[n],p[n];
    long long x,z;
    scanf("%lld",&x);
    for(i=0;i<n;i++)
    {
        p[i]=x%2;
        x/=2;

    }
    for(i=0;i<m;i++)
    {
        r=0;
        scanf("%lld",&z);
        for(j=0;j<n;j++)
        {
            a[j]=z%2;
            z/=2;
            if(r>k)
                break;

        }
        if(r<=k)
            l++;

    }
    printf("%d",l);
    return 0;
}
