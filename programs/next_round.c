#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n],i,x=k-1;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(a[x]==a[k-1] && x<n)
    {
        if (a[x]==0)
            x--;
        else if(a[k-1]!=a[x])
            break;
        else
            x++;


        if(x<0 || (a[k-1]==0 && a[x]!=0))
        {
            printf("%d",x+1);
            return 0;
        }

    }
 printf("%d",x);
    return 0;
}
