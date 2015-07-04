#include<stdio.h>
int main()
{
    int t,i,a[100],j,k;
    scanf("%d",&t);
    while(t-->0)
    {
        j=0;
        scanf("%d",&i);
        while(i)
        {
            a[j]=i%5;
            i/=5;
            j++;
        }
        j--;
        for(k=0;k<=j;k++)
        {
            if(a[k]>2)
            {
                a[k+1]++;
                a[k]-=5;
            }
        }
        for(k=j;k>=0;k--)
        {
            printf("%d",a[k]);
        }
        printf("\n");
    }
    return 0;
}
