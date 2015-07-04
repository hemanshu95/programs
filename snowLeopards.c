#include<stdio.h>
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
int a[110][110],q,b,c;
int main()
{
    long i,j;
    a[0][0]=1;
    for(i=1;i<=100;i++)
    {
        a[i][0]=1;
        a[i][i]=1;
        for(j=1;j<i;j++)
        {
            a[i][j]=((a[i-1][j-1]%100003)+(a[i-1][j]%100003))%100003;

        }
    }

    scanf("%d $d %d",&q,&b,&c);
    int n=q-(b*c);
    printf("%d",a[n][c]);
    return 0;

}
