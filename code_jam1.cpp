#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
int main()
{
    int n;
    sd(n);
    int a[n],i,t,b[n],j;
    float min1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    min1=(float)t/(float)a[0];
    b[0]=1;
    j=1;
    for(i=1;i<n;i++)
    {

        scanf("%d",&t);
        if(min1>((float)t/(float)a[i]))
        {
            min1=(float)t/(float)a[i];
            b[0]=i+1;
            j=1;
        }
        else if(min1==((float)t/(float)a[i]))
        {
            b[j]=i+1;
            j++;
        }
    }
    for(i=0;i<j;i++)
        printf("%d\n",b[i]);
    return 0;
}
