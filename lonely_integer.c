#include<stdio.h>
int main()
{
    int t,n,A[100],i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&A[i]);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(A[j]==A[i])
                {
                    A[j]=-1;
                    A[i]=-1;
                    break;
                }
            }
        }
        for(i=0;i<n;i++)
            if(A[i]!=-1)
                printf("%d\n",A[i]);
    }

    return 0;
}
