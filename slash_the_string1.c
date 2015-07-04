#include<stdio.h>
#include<string.h>
int slash_start(char a[],int f,int l)
{
    if(f==l)
        return 0;
    int n=1,j,i,flag,flag1;
    while(1)
    {
        flag1=1;
        for(j=f+n;j+n-1<=l;j++)
        {
            flag=0;
            for(i=0;i<n;i++)
            {
                if(a[f+i]!=a[j+i])
                    break;
               // printf("%d",n);
                if(i==n-1 && a[f+i]==a[j+i])
                {

                    n++;
                    if(f+2*n-1>l)
                     {
                        return n-1;
                     }
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        //printf("%d",n);
        if(flag==0 )
            break;
        if(f+2*n-1>l)
            break;
    }
   // printf("  %d ",n-1);

    return n-1;
}
int slash_end(char a[],int f,int l)
{
    if(f==l)
    {
        printf("x");
        return 0;
    }
    int n=1,j,i,flag,flag1;
    while(1)
    {
        flag1=1;
        for(j=f;j+n<=l-n+1;j++)
        {
            flag=0;
            for(i=0;i<n;i++)
            {
                if(a[l-n+1+i]!=a[j+i])
                    break;
               // printf("%d",n);
                if(i==n-1 && a[l-n+1+i]==a[j+i])
                {

                    n++;
                    if(f+n-1>=l-n+1)
                     {
                        return n-1;
                     }
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        //printf("%d",n);
        if(flag==0 )
            break;
        if(f+n-1>=l-n+1)
            break;
    }
   printf("  %d ",n-1);

    return n-1;
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
           // x=slash_start(a,f,l);
           // printf("oilpolp\n");
            x=0;
            if(x==0)
            {

                y=slash_end(a,f,l);
                if(y==0)
                {
                    f++;
                }
                else
                    l=l-y;

                n++;
                continue;
            }
            f+=x;
            n++;

        }
        printf("%d",n);
    }
    return 0;
}
