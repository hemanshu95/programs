#include<stdio.h>
#include<string.h>
int check(char s[],int size)
{
    int t=size/2,i;
    for(i=0;i<t;i++)
    {
        if(s[i]!=s[size-i-1])
        {
            //printf("FFDF");
            return 0;
        }

    }

    return 1;
}
int main()
{
    char s[10],a[10],b[10];
    scanf("%s",s);
    int l,j,flag=0,i,x,y;
    if(check(s,l=strlen(s)))
    {

            for(i=0;i<l/2;i++)
                printf("%c",s[i]);
            printf("%c",s[i]);
            for(;i<l;i++)
                printf("%c",s[i]);


    }
    else
    {
        j=l-1;
        x=0;
        y=0;
        for(i=0;i<=l/2 && j>=l/2;i++,j--)
        {
           // printf("HEllo%d",j);
            if(i==j)
            {
                a[x]=s[i];
                x++;
                break;
            }
            if(s[i]!=s[j])
            {
                //printf("\n%c%c\n",s[i],s[j]);
                if(flag==1)
                    break;

                if( s[i+1]==s[j])
                {

                    a[x]=s[i];
                    x++;
                    b[y]=s[i];
                    y++;
                    a[x]=s[i+1];
                    b[y]=s[j];

                    i++;
                    l++;

             //       printf("hello12");
                    flag=1;
                }
                else if (s[i]==s[j-1])
                {
                    b[y]=s[j];
                    y++;
                    a[x]=s[j];
                    x++;
                    a[x]=s[i];
                    b[y]=s[i];
                    j--;
                    l++;
                    flag=1;
               //     printf("hello23");
                }
                else
                {
                    flag=2;
                    break;

                }

            }
            else
            {
                a[x]=s[i];
                b[y]=s[j];
            }
            x++;
            y++;
        }
        a[x]='\0';
        if(flag==2)
           printf("NA");
        else
        {
            printf("%s",a);
            //printf("%d%c",y-1,b[y-1]);
            for(i=y-1;i>=0;i--)
            {

               printf("%c",b[i]);
            }
        }

    }
    return 0;
}
