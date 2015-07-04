#include<stdio.h>
#include<math.h>

int a[1500];
int p[300];
int main()
{
    int i,n,j=0,x=1500,t,l;
    //cout<<x;
    long long sum=0;
    for(i=2;i<x;i++)
    {
        if(a[i]==0)
        {
            for(l=2*i;l<=x;l+=i)
            {
                a[l]=1;
            }
            p[j]=i;
         //   cout<<p[j]<<" ";
            j++;
        }

    }
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%d",&n);
        x=sqrt(n);
        for(i=0;p[i]<=n &&p[i]>0 ;i++)
        {
            if(n%p[i]==0)
            {
               // cout<<p[i]<<"+";
                n/=p[i];
                sum+=p[i];
                i--;
            }

        }
        if(n>1)
            sum=sum+n;
       // cout<<endl;

    }
    printf("%lld",sum);
    return 0;
}
