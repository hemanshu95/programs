#include<stdio.h>

int main()
{
    int n,k,i,q;
    scanf("%d %d",&n,&k);
    long a[n],t;
    int x[25],z[25];
    memset(x,25,100);
    memset(z,25,100);
    for(i=0;i<n;i++)
    {
        q=0;
        scanf("%ld",&a[i]);
        t=a[i];
        while(t)
        {
            z[q]=t%2;
            t/=2;
            q++;

        }
        z[q]=100;
        for(j=0;j<q;j++)
        {
            if(z[j]==1 )
            {
                if(x[j]==1)
                    x[j]==0;
                else
                    x[j]==1;
            }
        }
    }
      t=k;
        while(t)
        {
            z[q]=t%2;
            t/=2;
            q++;

        }
        z[q]=100;
        for(j=0;j<q;j++)
        {
            if(z[j]==1 )
            {
                if(x[j]==1)
                    x[j]==0;
                else
                    x[j]==1;
            }
        }
}
