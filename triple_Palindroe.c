#include<stdio.h>
int checkpal(int a[],int i)
{
    int j=0;
    for(;i>j;i--,j++)
    {
        if(a[i]!=a[j])
            return 0;
    }
    return 1;
}
int check(long n)
{
    int x=3,i=2,a[20];
    for(;i<=20;i++)
    {
        while(n)
        {
            a[i]=n%i;
            n/=i;
        }
        if(checkpal(a,i-1));
        {
            x--;
            if(x==0)
                return 1;
        }
    }
    return 0;
}
int main()
{
    int N,x=20;
    scanf("%d",&N);
    long i=N+1;
    for(;x>0;i++,x--)
    {
        if(check(i))
        {
            printf("%ld\n",i);
            x--;
        }
    }
    return 0;
}
