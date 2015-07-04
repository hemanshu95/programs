
#include<stdio.h>
#define MAX(a,b) a>b? a:b
int n,A[100][100];
int sumi()
{
    int i,j;
    for(i=n-2;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0)
                A[i][j]+=MAX(A[i+1][j],A[i+1][j+1]);
            else
                A[i][j]+=MAX(A[i+1][j-1],MAX(A[i+1][j],A[i+1][j+1]));
        }
    }
    return 0;
}
int main()
{
    int t,x,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                scanf("%d",&A[i][j]);
            }
        }

        if(n>1)
            sumi();
        x=A[0][0];

        printf("%d\n",x);
    }

    return 0;
}
