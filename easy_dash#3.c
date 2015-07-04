#include<stdio.h>
int main()
{
    int t,temp;
    scanf("%d",&t);
    int n,a,b,d,x;
    while(t-->0)
    {
        scanf("%d\n%d\n%d\n",&n,&a,&b);
        if(b>a)
        {
            temp=b;
            b=a;
            a=temp;
        }
        x=(n-1)*b;
        d=b-a;
        while(n-->0)
        {
            printf("%d ",x);
            x+=d;
        }
        printf("\n");
    }
    return 0;
}
