#include<stdio.h>

int fibo(int i,int a1,int a2)
{
    if(i>25)
        return 0;
    else
    {

    printf("%d ",a2);
    i++;
    fibo(i,a2,a2+a1);
    return 1;
    }
}
int main()
{
    //int a1=1;
    //int a2=1;
    printf("1 ");
    fibo(2,1,1);
    return 0;
}
