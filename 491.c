#include<stdio.h>
int main()
{
    long u,d,i;
    scanf("%ld%ld",&u,&d);
    if(u==0)
    {
        for(i=d+1;i>0;i--)
            printf("%ld ",i);
    }
    else
    {
        printf("1 ");
        for(i=d+2;i<=u+d+1;i++)
            printf("%ld ",i);
        for(i=d+1;i>1;i--)
            printf("%ld ",i);
    }
    return 0;
}
