#include<stdio.h>
int fac(int n)
{
    short int factorial[100]={0};
    factorial[0]=1;
    int length =1,i,j,temp,sum;
    for(i=2;i<=n;i++)
    {
        j=temp=0;
        while(j<length)
        {
            sum=temp+factorial[j]*i;
            factorial[j]=sum%100;
            j++;
            temp=sum/100;
            if(j>=length && temp!=0)
                length++;
        }

    }
    printf("%d",factorial[--length]);
    while(length--)
    {
        if(factorial[length]<10)
            printf("0%d",factorial[length]);
        else
            printf("%d",factorial[length]);
    }
    printf("\n");
    return 0;
}
int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        fac(n);
    }
    return 0;
}
