#include<stdio.h>
int n;
int check(int B[][3],int X[] )
{
    int flag=0,x=0,i,y;
    for(i=0;i<n;i++)
    {
        if(X[0]==B[i][0] && X[1]==B[i][1] && X[2]==B[i][2] )
            return 1;
        if(X[0]>=B[i][0] && X[1]>=B[i][1] && X[2]>=B[i][2] )
            flag=1;
    }
    if(flag==0)
        return 0;
    int Bi[3];
    for(i=0;i<n;i++)
    {
        Bi[0]=X[0]-B[i][0];
        Bi[1]=X[1]-B[i][1];
        Bi[2]=X[2]-B[i][2];
        x=x || check(B,Bi) ;
        if(x)
            return 1;
    }
    return 0;
}
int main()
{
    int t,i,x;
    int A[3];
    scanf("%d",&t);
    x=t;
    while(t--)
    {
        scanf("%d%d%d",&A[0],&A[1],&A[2]);
        scanf("%d",&n);
        int B[n][3];
        for(i=0;i<n;i++)
        {
            scanf("%d%d%d",&B[i][0],&B[i][1],&B[i][2]);

        }
        printf("Case #%d: ",x-t);
        if(check(B,A))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
