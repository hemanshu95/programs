#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d",x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
int A[100000],n,r,i,flag;
int main()
{
    int t;
    sd(t);
    while(t-->0)
    {
        r=0;
        flag=1;
        sd(n);
        sd(A[0]);
        for(i=1;i<n;i++)
        {
            sd(A[i]);
            if(A[i]!=A[i-1])
            {
                r++;
                if(flag==1)
                {
                 r++;
                }
                flag=0;
            }
            else
                flag=1;
        }
        printf("%d\n",r);
    }

    return 0;
}
