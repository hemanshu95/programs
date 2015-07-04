#include<stdio.h>
#include<string.h>
int main()
{
    int a[26],n,i,l,t=0,j,k,flag;
    char arr[101];
    scanf("%d",&n);
    memset(a,0,26);
    if(n>0)
    {
        scanf("%s",arr);
        l=strlen(arr);
        for(i=0;i<l;i++)
        {
        a[(arr[i]-97)]=1;
        }
    }
    for(i=1;i<n;i++)
    {
        scanf("%s",arr);
        l=strlen(arr);
        for(j=0;j<26;j++)
        {
            if(a[j]==1)
            {
                flag=0;
                for(k=0;k<l;k++)
                {
                    if((j+97)==arr[k])
                    {
                     flag=1;
                     break;
                    }
                }
                if(flag==0)
                a[j]=0;

            }
        }

    }
    for(i=0;i<26;i++)
    {
    if(a[i]==1)
    t++;
    }
    printf("%d",t);
    return 0;
}
