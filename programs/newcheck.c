#include<stdio.h>
int sum(int a)
{
    if(a==0)
    {
        return (0);
    }
    else
    {


  //  s+=a%10;
    //a=a/10;
    //s=sum(a,s);
    return ((a%10)+sum(a/10));
    }
}
int main()
{
    int a,s=0;
    scanf("%d",&a);
    s=sum(a);
    printf("%d",s);
    return (0);
}
