#include<stdio.h>
int main()
{
    long n,k,i,j=0,x=1;
    scanf("%ld %ld",&n,&k);
    printf("%ld ",1);
    for(i=k;i>=1;i--,j++)
    {
        x+=(pow(-1,j)*i);
        printf("%ld ",x);

    }
    x=k+2;
    while(x<=n)
        {
            printf("%ld ",x);
            x++;
        }
    return 0;

}
