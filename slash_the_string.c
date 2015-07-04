#include<stdio.h>
#include<string.h>
int slash_start(char a[],int f,int l)
{
    int n=1,d=l-(f+n)+1,i,flag=0,flag1=1,j;
    while(d>=n && flag1==1)
    {
        flag1=0;
        for(i=f+n;(i+n-1)<=l;i++)
        {
            flag=1;
            for(j=0;j<n;j++)
            {
                if(a[f+j]!= a[i+j])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                flag1=1;
                break;
            }
        }
        if(flag1==1)
        {
            n++;
        }
        else
            break;
        d=l-f-n+1;

    }
    return n;
}
int main()
{
    int t,i,f,l,x,y,n;
    scanf("%d",&t);
    char a[2000];
    for(i=0;i<t;i++)
    {
        scanf("%s",a);
        l=strlen(a)-1;
        f=0;
        n=0;
        while(f<=l)
        {
            //flag=1;
            x=slash_start(a,f,l);
            if(x==1)
            {
                y=1;
                //y=slash_end(a,f,l);
                if(y==1)
                {
                    f++;
                }
                else
                    l=l-y;
                break;
            }
            f+=x;
            n++;

        }
        printf("%d",l);
    }
    return 0;
}
