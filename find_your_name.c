#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,n,q,i,flag;
    char x[1001],l[1001];
    bool a[26]={true};
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%s",x);
        i=0;
        for(;x[i]!='\0';i++)
        {
            a[x[i]-97]=true;
        }
        scanf("%d",&q);
        while(q--)
        {
            scanf("%s",l);

            i=0;
            flag=1;
            for(;l[i]!='\0';i++)
            {
                if(!a[l[i]-97])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
            {
                printf("no\n");
            }
            else
                printf("yes\n");

        }
    }
    return 0;
}
