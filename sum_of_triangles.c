#include<stdio.h>
#define MAX(a,b) a>b? a:b
int n,A[100][100];
int sumit(int i,int q )
{
    int t1,t2,t3;
    if(i==0)
    {

        t1=sumit(i+1,0)+A[i+1][0];

        t2=sumit(i+1,1)+A[i+1][1];
        printf("Level0 %d->%d %d\n",A[0],t1,t2);
        return MAX(t1,t2);
       // return MAX(sumit(1,0)+A[0][0];
    }
    if(i==n-1)
    {
        if(q==0)
        {
            printf("Level%d %d ->%d %d\n",i,A[i-1][q],A[i][q],A[i][q+1]);
            return MAX(A[i][0],A[i][1]);
        }
        printf("Level%d %d ->%d %d %d\n",i,A[i-1][q],A[i][q-1],A[i][q],A[i][q+1]);
        return MAX(A[i][q+1],MAX(A[i][q],A[i][q-1]));
    }
    if(q==0 )
    {
        t1=sumit(i+1,0)+A[i][0];
        t2=sumit(i+1,1)+A[i][1];
        printf("Level%d %d->%d %d\n",i,t1,t2);
        return MAX(t1,t2);
    }
    else
    {
        t1=sumit(i+1,q-1)+A[i+1][q-1];
        t2=sumit(i+1,q)+A[i+1][q];
        t3=sumit(i+1,q+1)+A[i+1][q+1];
        printf("Level%d %d %d %d\n",i,t1,t2,t3);
         return MAX(t1,MAX(t2,t3));
    }
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
        x=sumit(0,0);
        printf("%d\n",x);
    }

    return 0;
}
