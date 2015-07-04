#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
int t,n,k,i,q,d,x,y,r;
char a[101];
int main()
{
    sd(t);
    while(t-->0)
    {
        ss(a);
        sd(n);
        //n=strlen(a);
        x=0;
        y=0;
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]=='T')
                x++;
            else
                y++;
        }
        q=(2*x)+y;
        r=12*n;
        d=r/q;
        x=(q*d*(d-1))/2;
        x+=(d*(r%q));
        printf("%d\n",x);
    }
    return 0;
}
