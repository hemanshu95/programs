#include<stdio.h>
int check(long long  l,long long r)
{
    int d=r-l;
    if(d<=1 || (d==2 && l%2==1))
        printf("%d",-1);
    else if( l%2==0)
        printf("%I64d %I64d %I64d",l,l+1,l+2);
    else
        printf("%I64d  %I64d %I64d",l+1,l+2,l+3);
      return 0;
}

int main()
{
    long long l,r;
    scanf("%I64d %I64d",&l,&r);
    check(l,r);
    return 0;
}
