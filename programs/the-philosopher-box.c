#include<stdio.h>

int main()
{
    int t,i=0,flag1=0,flag2=0,j=0,k=0;
    int a[26]={};
    scanf("%d",&t);
    char q[100];
    scanf("%s",q);
    while(q[i]!='\0')
    {
        if(q[i]!='?')
        {
         if(a[q[i]-97]!=1)
            a[q[i]-97]=1;

         }
         else
            flag2=1;
      i++;
    }
    if(flag2==1)
    {
        for(i=0;i<26;i++)
        {
            if(a[i]!=1)
                a[i]=2;
        }
    }
    for(i=1;i<t;i++)
    {
        scanf("%s",&q);
        for(j=0;j<26;j++)
        {
          if(a[j]==1 || a[j]==2)
          {
           flag1=0;
           flag2=0;
           k=0;
           while(q[k]!='\0' )
           {
                if(q[k]==j+97)
                {
                    flag1=1;
                    //break;
                }
                if(q[k]=='?')
                    flag2=1;
                k++;
            }
            if(flag1==0)
            {
                if(flag2==1)
                    a[j]=2;
                else
                    a[j]=0;
            }
          }
        }
    }
    flag1=0;
    flag2=0;
    for(j=0;j<26;j++)
    {
        if(a[j]==1)
            flag1=1;
        else if(a[j]==2)
            flag2=1;
    }
        if(flag1==0)
        {
            if(flag2==1)
                printf("Maybe");
            else
                printf("No");
        }
        else
                printf("Yes");
    return 0;
}

