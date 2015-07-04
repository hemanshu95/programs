#include<stdio.h>
int main()
{
    int n,i,a[26]={},A[26]={};
    char c;
    scanf("%d%c",&n,&c);
    for(i=0;i<n;i++)
    {
        scanf("%c",&c);
        if(c>=65 && c<=90)
        {
            if(A[c-65]==1)
                continue;
            else
                A[c-65]=1;

        }
        if(c>=97 && c<=122)
        {
            if(a[c-65]==1)
                continue;
            else
                a[c-65]=1;

        }
        printf("%c",c);
    }
    return 0;
}
