#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
char a[100000][51];
int len[100000],i,j,k;
int main()
{
    int n;
    sd(n);
    for(i=0;i<n;i++)
    {
        ss(a[i]);
    }
    int flag=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j!=i)
            {
                for(k=0;a[i][k]!='\0'&&a[j][k]!='\0' ;k++)
                {
                    if(a[i][k]!=a[j][k])
                        break;
                }
                if(a[i][k]=='\0' || a[j][k]=='\0')
                    flag=1;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==1)
        printf("vulnerable");
    else
        printf("non vulnerable");

    return 0;
}

