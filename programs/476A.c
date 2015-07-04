#include<stdio.h>
int main()
{
    int n,m,i,k;
    scanf("%d %d",&n,&m);
    if(m>n)
       {
        printf("-1");
        return 0;
       }
    if(n%2==0)
        k=n/2;
    else
        k=(n+1)/2;
    for(i=k;i<=n;i++)
    {
       if(i%m==0)
       {
           printf("%d",i);
           return 0;
       }
    }
    printf("-1");
    return 0;



}
