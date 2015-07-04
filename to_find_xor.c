#include<stdio.h>
int xor(int a,int b)
{
    int k=1,x=0;

    while(a>0 || b>0)
    {
        if(a%2!=b%2)
            x+=k;
            k*=2;
        a/=2;
        b/=2;

    }
    return x;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d 0+ %d = %d",a,b,xor(a,b));
    return 0;
}
