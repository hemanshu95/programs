#include<stdio.h>
#define MAX(a,b) a>b? a:b
int n,A[100][100];
int sumi(int i,int q)
{
    if(i==n-1)
    {
        return MAX(A[i][q],A[i][q+1]);
    }
    int t1=sumi(i+1,q)+A[i][q];
    int t2=sumi(i+1,q+1)+A[i][q+1];
    return MAX(t1,t2);

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
        x=A[0][0];
        if(n>1)
            x+=sumi(1,0);

        printf("%d\n",x);
    }

    return 0;
}
