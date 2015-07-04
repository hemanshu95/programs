#include<stdio.h>
int main()
{
    int i,t,a1,a2;
    scanf("%d",&t);
    int a[t],b[t-1];
    for(i=0;i<t;i++)
        scanf("%d",&a[i]);

    int max1=0,min1,j,x;


    for(i=1;i<t-1;i++)
    {
        max1=0;
        for(j=1;j<t;j++)
        {
            if(j==i)
            {
                x=a[j+1]-a[j-1];
            }
            else
                x=a[j]-a[j-1];
            if(max1<x)
                max1=x;

        }
        if(i==1)
            min1=max1;
        else
        {
            if(min1>max1)
                min1=max1;
        }
    }
    printf("%d",min1);
    return 0;
}
