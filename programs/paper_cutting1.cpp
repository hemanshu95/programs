#include<stdio.h>
#include<math.h>
#include<stdlib>

int main()
{
    const int t1=pow(10,9)+7;
    int t,n,i,j;
    scanf("%d",&t);
    int a[100000];
    double s[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(j==0)
                s[i]=a[0];
            else if(j<n-1)
            {
                s[i]+=(pow(-1,j)*(n-1)*a[j]);
            }
            else
                s[i]+=pow(-1,n-1)*a[n-1];
        }
        if (s[i]>0)
        {
            while(s[i]>=0)
                s[i]-=t1;
            s[i]+=t1;
        }
        if(s[i]<0)
        {
            while (s[i]<0)
                s[i]+=t1;
        }

    }
    for(i=0;i<t;i++)
        printf("%ld\n",(long)s[i]);
}
