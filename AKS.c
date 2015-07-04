#include<stdio.h>
long long i,a[1000000],n,flag=0,k=0;
int main()
{

    scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==i)
            k++;
        else if(flag==0 && a[a[i]]==i )
        {
            flag=1;
            k+=2;
        }

    }
    if(flag==0 && k<n-1)
    {
        k++;
    }
    else if(flag==0 && k==n)
        k-=2;
    printf("%lld",k);
    return 0;
}
