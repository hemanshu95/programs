#include<stdio.h>
int N,M;
int check(char a[100][100],int n ,int x,int y )
{
    if(y>=M)
        return 0;
    int i,j=y,k,p,r,flag=0,flag1=0;
    for(i=x;i<=n;i++)
    {

        if(j>=M)
        return 0;

        if(a[i][j]!='\0')
        {



            if(a[i][j]>a[i+1][j])
            {
                for(k=0;k<N;k++)
                {
                    a[k][j]='\0';
                }
                if(j==M-1)
                {
                    return 0;
                }
                else
                {
                    check(a,n,x,j+1);
                    break;
                }

            }
            else if(a[i][j]==a[i+1][j])
            {
                flag1=0;
                r=i+1;
                for(k=i+1;k<=n;k++)
                {
                    if(a[k][j]>a[k+1][j])
                    {
                        for(p=0;p<N;p++)
                        {
                            a[p][j]='\0';
                        }
                        if(j==M-1)
                        {
                            return 0;
                        }
                        else
                        {
                            check(a,n,x,j+1);
                            return 0;
                        }
                    }

                    if(a[i][j]<a[k][j])
                    {
                        flag1=1;
                    }
                    else if(flag1==0 && a[i][j]==a[k][j])
                        r=k;
                }
                i=r;
                check(a,r,i,j+1);
            }
        }
        else
        {
            j++;
            i--;
        }
    }
    return 0;
}
int main()
{
    int q=0,i,j;
    scanf("%d%d",&N,&M);
    char a[N][M];

    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
            scanf("%c",&a[i][j]);
        scanf("\n");
    }
    if(N==1)
    {
        printf("0");
        return 0;
    }
    check(a,N-1,0,0);
    //printf("hdwl");
    for(i=0;i<M;i++)
    {
        if(a[0][i]=='\0')
            q++;
    }
    printf("%d",M-q);
    return 0;
}
