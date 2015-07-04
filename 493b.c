#include<stdio.h>
int main()
{
    long long a=0,b=0,n,i,j=0,l=0,t,flag=1;

    scanf("%I64d",&n);
    long long a1[n],b1[n];
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&t);
        if(t>0)
        {
            a+=t;
            a1[j]=t;
            j++;
        }
        else
        {
            b+=t;
            b1[l]=t;
            l++;
        }

    }
    b*=-1;
    if(a>b)
        printf("first");
    else if(b>a)
        printf("second");
    else
    {
        i=0;
        while(flag==1 && i<(n/2))
        {
            if(a1[i]>(-1*b1[i]))
            {
                printf("first");
                flag=0;
            }
            else if(a1[i]<(-1*b1[i]))
            {
                printf("second");
                flag=0;
            }
            i++;
        }
        if(flag==1)
        {
            if(t>0)
                printf("first");
            else
                printf("second");
        }
    }
    return 0;
}
