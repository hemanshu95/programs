#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void swap(long *n, long *m)
{
    long temp;
    temp=*n;
    *n=*m;
    *m=temp;
}
/* function returning the max between two numbers */
long max(long num1, long num2)
{
   /* local variable declaration */
   long result;

   if (num1 > num2)
      result = num1;
   else
      result = num2;

   return result;
}

int main(void)
{
    long t,i,j,m,n,mice[131072],hole[131072],k,mi;
    scanf("%ld",&t);
    long mt[t];
    for(i=0;i<t;i++)
    {
            scanf("%ld %ld",&n ,&m);
            for(j=0;j<n;j++)
                scanf("%ld",&mice[j]);

            for(j=0;j<n;j++)
            {
                for(k=0;k<n-j-1;k++)
                {
                    if(mice[k]>mice[k+1])
                        swap(&mice[k],&mice[k+1]);
                }
            }
            printf("j");
            for(j=0;j<m;j++)
                scanf("%ld",&hole[j]);
             for(j=0;j<m;j++)
            {
                for(k=0;k<m-j-1;k++)
                {
                    if(hole[k]>hole[k+1])
                        swap(&hole[k],&hole[k+1]);
                }
            }
            printf("j");
            j=0;
            mi=0;
            while(j+n<=m)
            {
                if(max(abs(hole[n+j]-mice[n]),abs(hole[j]-mice[0]))<max(abs(hole[n+mi]-mice[n]),abs(hole[mi]-mice[0])))
                    mi=j;
                j++;
            }
            printf("j");
            mt[i]=0;
            while(j<n)
            {
                if(abs(hole[mi+j]-mice[j])>mt[i])
                {
                    mt[i]=abs(hole[mi+j]-mice[j]);
                }
            }
            printf("k");

    }
    for(i=0;i<t;i++)
    {
        printf("%ld",mt[i]);
    }
    return 0;
}

