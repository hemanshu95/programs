#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int check(unsigned long *a[],unsigned long b,unsigned long r)
{
    unsigned long j;
    for(j=0;j<b;j++)
    {
        if(r==a[j])
        {
          return 1;
        }
        else
        if(a[j]<r)
        {

          if(check(a,b,r-a[j]))
            return 1;
        }
    }
    return 0;


}
int main() {
    unsigned long b,q,i,j,k;
    scanf("%lu %lu",&b,&q);
    unsigned long m[b];
    int c[q];
    for(i=0;i<b;i++)
    {
        scanf("%lu",&m[b]);
    }
    //  printf("hell");
    for(i=0;i<q;i++)
    {
        scanf("%lu",&k);
        c[i]=check(m,b,k);
        //printf("DF");
        //for(j=0;j<b;j++)
        //if(!flag)

    }

    for(i=0;i<q;i++)
    {
        switch(c[i])
        {
            case 0: printf("no\n");
                break;
            case 1: printf("yes\n");
                break;

        }
    }



    return 0;
}
