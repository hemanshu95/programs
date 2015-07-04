#include<stdio.h>
int main()
{
    int a,i,sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a);
        sum+=a;
    }

    if(sum%5==0 && sum)
        printf("%d",sum/5);
    else
        printf("-1");
    return 0;


}
