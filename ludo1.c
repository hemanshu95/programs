#include<stdio.h>
int B[100]={0},C[100]={0},b,c;
int main()
{
    int t,n,k,i,j,flag,x,r,temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&c,&b);
        n=0;
        for(i=0;i<58;i++)
        {
            //scanf("%d",temp);
            C[i]=0;
            B[i]=0;
        }
        for(i=0;i<c;i++)
        {
            scanf("%d",&temp);
            //printf("%d",temp);
            C[temp]=1;
        }
        for(i=0;i<b;i++)
        {
            scanf("%d",&temp);
           // printf("%d",temp);
            B[temp]=1;
        }
        i=0;
        k=0;
        j=0;
        while(n<57)
        {
            for(i=1;i<7;i++)
            {
                if(i+n<58)
                {
                    if(C[i+n]==1)
                    {
                        break;
                    }
                }

            }
            if(i<7)
            {
                n=i+n;
                k++;
                printf("%d",n);
                continue;
            }
            for(i=6;i>=1;i--)
            {
                if(i+n<58)
                {
                    if(B[i+n]==0)
                    {
                        break;
                    }
                }

            }
            n=i+n;
            printf("%d",n);
            k++;
        }

        printf("%d\n",k+1);
    }
    return 0;
}
