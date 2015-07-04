#include<stdio.h>
int ch_an(char s[],int l)
{
    int i=0,a[26]={0};
    l--;
    for(;i<l;i++,l--)
    {
        a[s[i]-97]++;
        a[s[l]-97]--;
    }
    l=0;
    for(i=0;i<26;i++)
    {
        if(a[i]>0)
            l+=a[i];
    }
    return l;

}

int main()
{
    int t;
    scanf("%d",&t);
    char s[10001];
    while(t--)
    {
        scanf("%s",s);
        l=strlen(s);
        if(l%2)
            printf("-1\n");
        else
        {
            printf("%d\n",ch_an(s,l));
        }
    }
    return 0;
}
