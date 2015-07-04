#include<stdio.h>
int main()
{
    int t,i,n,k,x;
    char a[41];
    scanf("%d",&t);
    while(t--)
    {
            scanf("%s",a);
            x=strlen(a);
            printf("%d\n",x);
            for(i=0;i<x;i++)
            {
                n=a[i+1]-48;
                for(k=0;k<n;k++)
                    printf("%c",a[i]);
            }


        printf("\n");
    }
    return 0;

}
