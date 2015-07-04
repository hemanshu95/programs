#include<stdio.h>
int main()
{
    long t,n=0,i,j,a[26];
    scanf("%ld",&t);
    char c;
    scanf("%c",&c);

    for(j=0;j<t;j++)
    {
        n=0;
        scanf("%c",&c);
        while(c!='\n')
        {
                if(a[c-97]!=1)
                a[c-97]=1;

            scanf("%c",&c);
        }
        n=0;
        for(i=0;i<26;i++)
        {
            if(a[i]==1)
            {
                n++;
            }
            a[i]=0;
        }
        printf("%d\n",n);
    }
    return 0;
}
