#include<stdio.h>
int main()
{
    long i,n,k,temp,un,j,min;
     scanf("%d",&n);
        scanf("%d",&k);
          int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
       min=i;
       for(j=i+1;j<n;j++)
       {
            if(a[j]<a[min])
            {
                min=j;

            }
       }

        temp=a[min];
        a[min]=a[i];
        a[i]=temp;

    }
    un=a[k-1]-a[0];
    for(i=1;i+k-1<n;i++)
    {
        if(a[i+k-1]-a[i]<un)
            un=a[i+k-1]-a[i];
    }
    printf("%d",un);
    return 0;
}
