#include<stdio.h>
int main()
{
    int t,n,i,flag,k;
    scanf("%d",&t);
    char c;
    while(t--)
    {

        scanf("%d\n",&n);
        c='a';
        i=1;
            flag=1;
            k=0;

        while(c!='e')
        {
           scanf("%c",&c);

            if (c=='1')
                k+=1;
            if (k%n==0)
            {
                if (flag == 1)
                {
                    printf("%d she loves me\n",i);
                    flag=0;
                }
                else
                {
                    printf("%d she loves me not\n",i);
                    flag=1;
                }
            }
            k*=2;
            i+=1;

        }
        printf("\n");
    }
    return 0;
}

