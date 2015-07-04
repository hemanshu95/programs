#include<stdio.h>
int a[30];
int main()
{
    a[0]=0;
    a[1]=1;
    int i=1,t,n,j,k;
    while(a[i]<100000)
    {
        a[i+1]=a[i]+a[i-1];
        i++;
    }
    i--;
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%d",&n);
        j=i;
        k=0;
        while(n>0)
        {
            while(a[j]>n)
            {
                j--;
            }
            n-=a[j];
            k++;
        }
        printf("%d\n",k);
    }
    return 0;
}
