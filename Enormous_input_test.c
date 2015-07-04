#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    long n,x;
    while(t--)
    {
        scanf("%d",&n);
        x=5;
        k=n/5;
        if(k>0)
        {
            while(1)
            {
                x*=5;
                if((n/x)==0)
                    break;
                k+=(n/x);
            }
        }
        printf("%d\n",k);
    }
    return 0;
}
