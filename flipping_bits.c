#include<stdio.h>

int main()
{
    unsigned long q,y,r;
    int t,i,x,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        r=0;
        y=1;
        scanf("%lu",&q);
        for(j=0;j<32;j++)
        {

            x=q%2;
            if(x==1)
                x=0;
            else
                x=1;
            r+=(x*y);
            q/=2;
            y*=2;
        }
        printf("%lu\n",r);
    }
    return 0;
}
