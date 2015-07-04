#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,f,d,k,l,flag1=1,flag=1,len,m,n=0;
    char a[2000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",a);
        f=0;
        len=strlen(a);
        l=1;
        while(f<len-1)
        {


        while(flag==1)
        {
            flag=0;
            d=l-f;
            for(k=l+1;k+d<len;k++)
            {   flag1=1;
                for(m=0;m<=d;m++)
                {
                    if(a[m]!=a[k+m])
                        {
                            flag1=0;
                            break;
                        }
                }
                if(flag1==1)
                {
                    l++;
                    flag=1;
                    break;

                }
            }
        }
        //l--;
        f=l+1;
        n++;
    }
    printf("%d",n);
    }
}
