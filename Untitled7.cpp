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
    long long n=20,j=0;
    i=2;
    while(n>1)
    {
        //printf("%d %d %d %d\n",i,b[j],c[j],j);
        //printf("\n%d %d %d%d %d\n",i,b[j],c[j],j);
        if(n%i==0)
        {

            n/=i;

            if(b[j]==i)
            {
                c[j]++;
            }
            else
            {
                j++;
                b[j]=i;
                c[j]++;
            }
            //printf("%d %d %d %d\n",i,b[1],c[1],j);
            i--;
        }
        i++;
    }

    for(i=1;i<=j;i++)
        printf("%d^%d  ",b[i],c[i]);
    printf("Hello");


    printf("sdfgd");

}
