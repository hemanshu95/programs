#include <math.h>
#include<stdio.h>
int main()
{
    int t,i;
    long n,temp,temp1;
    long j,k,r;
    scanf("%d",&t);
    double a[100000],q;
    long arr[t];
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        for(j=0;j<n;j++)
        {
            scanf("%lf",&a[j]);

        }
        k=n;
        while(k>1)
        {
            for(j=0;j<k-1;j++)
                a[j]=(a[j]-a[j+1]);
            k--;
        }
        temp1=pow(10,9)+7;
        if(a[0]>0)
        {
            while(a[0]>0)
            {
                a[0]-=temp1;
            }
            a[0]+=temp1;
        }
        else
        {
            while(a[0]<0)
            {
            a[0]+temp1;
            }
        }
        arr[i]=(long)a[0];
        //arr[i]=temp%temp1;
    }
    for(i=0;i<t;i++)
    {
        printf("%ld\n",(long)arr[i]);

    }
    return 0;
}


