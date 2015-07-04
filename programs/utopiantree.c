#include<stdio.h>
int main()
{
    int n,t,i,j=1;
    scanf("%d",&t);
    int h[t];
    for(i=0;i<t;i++)
    {
        h[i]=1;
        scanf("%d",&n);
        j=1;
        while(j<=n)
        {
            if(j%2==1)
            {
                h[i]*=2;
            }
            else if(j%2==0)
                h[i]+=1;

            j++;
        }

    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",h[i]);
    }
    return 0;
}
