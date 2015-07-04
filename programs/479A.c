#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==1)
    {
        if (b==1)
        {

        if(c==1)
            printf("3");
        else
            printf("%d",2*c);

        }
        else if(c==1)
            printf("%d",b+2);
        else
            printf("%d",(a+b)*c);

    }
    else if(b==1)
    {
        if(a>c)
        printf("%d",a*(c+1));
        else
            printf("%d",(a+1)*c);
    }
    else if(c==1)
        printf("%d",a*(b+1));
    else
        printf("%d",a*b*c);
    return 0;
}
