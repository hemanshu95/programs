#include<stdio.h>

int main()
{
    char a[21],b[21],i,j;
    scanf("%s%s",a,b);
    int n;
    scanf("%d",&n);
    int t[n],m[100];
    char tn[n],c[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %c %d %c",&t[i],&tn[i],&m[i],&c[i]);
        //if(c[i]=='y')
        {
            for(j=0;j<i;j++)
            {
                if(tn[i]==tn[j] && m[i]==m[j] && c[j]=='r')
                {
                   c[i]='x';
                    break;
                }
                if(tn[i]==tn[j] && m[i]==m[j] && c[j]=='y')
                {
                   c[i]='r';

                }

            }
        }
        if(c[i]=='r')
        {
            if(tn[i]=='h')
            {
                printf("%s",a);
            }
            else
               printf("%s",b);
            printf(" %d %d\n",m[i],t[i]);
        }
    }
    return 0;
}
