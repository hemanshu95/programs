#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,l,m,j,k;
    scanf("%d",&t);
    char p[t][1001],s[t][1001],temp;
    for(i=0;i<t;i++)
    {
        scanf("%s",p[i]);
        strcpy(s[i],p[i]);
        l=strlen(p[i]);
        m=0;
        for(j=0;j<l;j++)
        {
            temp=p[i][0];
            for(k=0;k<l;k++)
            {
                p[i][k]=p[i][k+1];
            }
            p[i][l-1]=temp;
            if(strcmp(p[i],s[i])>0)
                strcpy(s[i],p[i]);
        }
    }
    for(i=0;i<t;i++)
    {
      printf("%s\n",s[i]);
    }

    return 0;
}
