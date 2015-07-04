#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,i,j,flag;
    scanf("%d",&t);
    int a[26];
    int b[26];
    char c[100000];
    for(i=0;i<t;i++)
    {
        //memset(a,26,0);
        for(j=0;j<26;j++)
        {
            a[j]=0;
            b[j]=0;
        }
        //memset(b,26,0);
        scanf("%s",c);

        for(j=0;c[j]!='\0';j++)
        {
            a[c[j]-97]=1;

        }
        scanf("%s",c);
        for(j=0;c[j]!='\0';j++)
        {
            b[c[j]-97]=1;

        }

        flag=0;
        for(j=0;j<26;j++)
        {
            if(a[j]==1 && b[j]==1)
             {
                flag=1;
                printf("YES\n");
                break;
            }
        }
        if(flag==0)
           printf("NO\n");
    }

    return 0;
}
