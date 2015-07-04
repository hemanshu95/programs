#include<stdio.h>
#include<string.h>
int check(char s[],int f,int l)
{
    for(;f<=l;f++,l--)
    {
        if(s[f]!=s[l])
            return 0;
    }
    return 1;
}
int main()
{
    int t,l,x,j,i;
    char s[100006];
    scanf("%d",&t);

    while(t--)
    {
        x=-1;
        scanf("%s",s);
        l=strlen(s);
        j=l-1;
        for(i=0;i<=j;i++,j--)
        {
            if(s[i]!=s[j])
            {
                if(check(s,i+1,j))
                {
                    x=i;

                }
                else
                    x=j;
                break;
            }

        }
        printf("%d\n",x);
    }

    return 0;
}
