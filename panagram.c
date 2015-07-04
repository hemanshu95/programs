#include<stdio.h>
int main()
{
    char s[1001];
    scanf("%[^\n]s",s);
    int i=0;
    int a[26]={0};
    while(s[i]!='\0')
    {
        if(s[i]>=65 && s[i]<=90)
        {
            //printf("%d",s[i]-65);
            a[s[i]-65]=1;
        }
        if(s[i]>=97 && s[i]<=122)
        {
          //  printf("%d",s[i]-97);
            a[s[i]-97]=1;
        }
        i++;
    }
    for(i=0;i<26;i++)
    {
        //printf("\n%c %d",i+97,a[i]);
        if(a[i]!= 1 )
        {
            printf("not pangram");
           return 0;
        }
    }
    printf("pangram");
    return 0;
}
