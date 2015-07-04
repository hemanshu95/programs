#include<stdio.h>
int main()
{
    int t,a[32],i,x,m,k,l,z;
    long int n;

    scanf("%d%d",&t,&k );
    int flag;
    while(t-->0)
    {
        scanf("%ld",&n);

        z=0;
        l=0;
        while(z<n)
        {
            l++;
            i=0;
            flag=1;
            m=0;
            printf("hello");
             while(l)
            {


                a[i]=l%2;
                // printf("%d",a[i]);

                if(a[i]==1)
                {
                    x++;
                }
                else
                    x=0;

               if(x>m)
                    m=x;

                i++;

                l/=2;

                if(m>=k)
                {
                    flag=0;
                    break;
                }
             }
            if(flag==1)
                z++;
            printf("%d",z);
        }
        i--;
        for(;i>=0;i--)
             printf("%d",a[i]);
        printf("\n");


    }
    return 0;
}
