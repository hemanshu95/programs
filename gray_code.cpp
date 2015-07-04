#include<stdio.h>
#include<string.h>
int main()
{
    int t,l;
    char a[1000];
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%s",a);
        l=strlen(a);
        //b[l]=a[l];
        l--;
        for(;l>0;l--)
        {
            if (a[l-1]=='1')
                    a[l]='1'-a[l]+'0';

        }
        printf("%s\n",a);
    }
    return 0;
}
