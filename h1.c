#include<stdio.h>
long a[1000001],b[1000001],c[1000001];
long i,sum=1,j,k,x,y,r;
int main()
{
    for(i=2;i<1000001;i++)
    {
        if(a[i]==0)
        {
            for(j=2*i;j<=1000000;j+=i)
            {
                a[j]=1;

            }
        }

    }
    //printf("%d",a[1000000]);

    for(i=2;i<=1000000;i++)
    {
        if(a[i]==0)
        {
            j=i+1;
            r=1;
            while(j<=1000000)
            {
                if(a[j]==0)
                    b[j-r]=1;
                r=j;
                j=(j*i)+1;

            }

        }

    }
    k=0;
    c[1]=0;
    c[0]=0;
    for(i=2;i<=1000000;i++)
    {
        if(b[i]==1)
            k++;
            //if(i<1000)
            //printf("%d\n",i);}
        c[i]=k;
    }
    //printf("%d %d",c[10],c[8]);
    int t;
    scanf("%d",&t);

    while(t-->0)
    {
        scanf("%ld%ld",&x,&y);
        printf("%d\n",c[y]-c[x-1]);

    }

    /*for(i=2;i<1000000;i++)
    {
        sum=1;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                sum+=j;
        }
        if(a[sum]==0)
        printf("%d==%d\n",i,sum);
    }*/
    return 0;
}
