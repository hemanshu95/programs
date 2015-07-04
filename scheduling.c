#include<stdio.h>
int main()
{
    int C[4][4],i,st,et,l,j,q,k,n,t,D[4][4][4]={2};
    char s[10],p[6];
    scanf("%d",&t);
    while(t-->0)
    {
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
                C[i][j]=10;
        }
        scanf("%d",&q);
        for(i=0;i<q;i++)
        {
            scanf("%s %d %d %s",s,&st,&et,p);
                C[s[3]-'0'][st/25]=p[2]-'0';
        }
        k=0;
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {

                if(C[i][j]==0)
                {
                    for(k=0;k<4;k++)
                    {
                        if(C[i][k]>0)
                        {
                            D[C[i][k]-1][i][j]=0;

                        }
                    }
                    for(k=0;k<4;k++)
                    {
                        if(C[k][j]>0)
                        {
                            D[C[k][j]-1][i][j]=0;

                        }
                    }
                    l=0;
                    for(k=0;k<4;k++)
                    {


                        if(l==0 && D[k][i][j]==2)
                            l=k+1;
                        else if(D[k][i][j]==2)
                        {
                            l=5;
                            break;
                        }
                    }
                    if(l>0 && l<5)
                        C[i][j]==l;

                }
            }
        }
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
                printf("%d ",C[i][j]);
            printf("\n");
        }


    }
    return 0;
}
