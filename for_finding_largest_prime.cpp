#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
long long t,n,k,i,j,max1;
bool a[1000000000];
int b[1000],c[1000];
int main()
{
    long long n=1000000000;
    for(i=2;i<n;i++)
    {
        if( a[i]==false && n%i==0 )
        {
            //b[j]
            //max1=i;
            for(j=i*2;j<n;j+=i)
            {
                a[j]=true;
            }
        }
        printf("12");
    }
    printf("Hello");
    for(i=n;i>1;i--)
    {
        if(!a[i])
            printf("%d\n",i);
    }

    //printf("%d",max1);

}
