#include<stdio.h>
long a[10000001],b[1000001],c[1000001];
long i,sum=1,j,k,x,y,r,max,max2;
int main()
{
    for(i=2;i<=1100000;i++)
    {
        if(a[i]==0)
        {
            for(j=2*i;j<=1100000;j+=i)
            {
                a[j]=1;

            }
        }

    }

    max=1;
    max2=10;
    for(i=2;i<=1000000;i++)
    {

        if(a[i]==0)
        {
            j=i+1;
            r=1;
            while(j-r<=1000000)
            {
                if(j-r>max)
                    max=j-r;
                if(j-r<max2)
                max2=j-r;
                if(a[j]==0)
                    b[j-r]=1;
                r=j;
                j=(j*i)+1;

            }

        }

    }
    printf("xcghj%ld %ld\n",max,max2);
    k=0;
    c[1]=0;
    c[0]=0;
    for(i=2;i<=1000000;i++)
    {
        if(b[i]==1)
            k++;

        c[i]=k;
    }

    int t;
    scanf("%d",&t);

    while(t-->0)
    {
        scanf("%ld%ld",&x,&y);
        printf("%ld\n",c[y]-c[x-1]);

    }


    return 0;
}
