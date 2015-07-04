#include<stdio.h>
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
int n,t,x,a[500000][2],r,c[1001][2],i,j,qn,r1,xr[1001][2];
int main()
{
    sd(t);
    while(t-->0)
    {

        scanf("%d %d",&n,&r);
        for(i=0;i<r;i++)
        {
            a[i][0]=0;
            a[i][1]=0;
        }
        for(j=0;j<=n;j++)
        {
            c[j][0]=-1;
            c[j][1]=-1;
        }
        for(i=0;i<r;i++)
        {
            scanf("%d %d",&a[i][0],&a[i][1]);
        }

        x=1,r1=1;
        for(i=0;i<r;i++)
        {
            c[a[i][0]][0]=i;
            c[a[i][1]][1]=i;
        }


        r1=1;
        qn=-1;
        while(r1>0)
        {
            r1=0;
            qn++;
            for(i=0;i<n;i++)
            {
                if(c[i][0]==-1 && c[i][1]>=0)
                {
                    r1++;
                    a[c[i][1]][1]=0;
                    xr[r1][0]=a[c[i][1]][0];
                    xr[r1][1]=0;

                    a[c[i][1]][0]=0;
                    c[i][1]=-1;
                }
                if(c[i][1]==-1 && c[i][0]>=0)
                {
                    r1++;
                    xr[r1][0]=a[c[i][0]][1];
                    xr[r1][1]=1;
                    a[c[i][0]][0]=0;

                    a[c[i][0]][1]=0;
                    c[i][0]=-1;


                }

            }

            for(i=1;i<=r1;i++)
            {
                c[xr[i][0]][xr[i][1]]=-1;
            }
        }

        printf("%d\n",qn);
    }
    return 0;
}
