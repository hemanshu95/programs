#include<stdio.h>
int main()
{
    int n,i=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    while(s[i]=='W' || s[i]=='L')
    {
        if(s[i]=='L')
        {
            if(n%2==0)
                n/=2;
            else
                n=(n+1)/2;

        }
        else
        {
            n*=2;
            n+=11;
        }
        i++;
        //scanf("%c",&c);
    }
    printf("%d",n);
    return 0;
}
