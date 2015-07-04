#include<stdio.h>
int a[100][100];
int main()
{
    int n=7,k=7,i,j;
    for(i=0;i<n;i++)
        a[0][i]=1;
    for(j=1;j<k;j++)
    {
        for(i=n;i>=0;i--)
        {
            a[j][i]=a[j-1][i]+a[j][i+1];
          //  printf("%d ",a[j][i]);
        }
        //printf("\n");
    }
    for(j=1;j<k;j++)
    {
        for(i=0;i<n;i++)
        {
            //a[j][i]=a[j-1][i]+a[j][i+1];
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    printf("\n\n\ndfghj\%d %d",-10%12,-35%12);
    return 0;
}
