#include<stdio.h>
int main()
{
    long long a[2],b[2],c[2],t,i,min,x,flag;
    char ch;
    scanf("%lld",&t);
    while(t-->0)
    {

        scanf("%lld",&a[0]);
        scanf("%c",&ch);
        if(ch=='/')
        {
            scanf("%lld",&a[1]);
        }
        else
            a[1]=1;
        flag=1;
        x=1;
        if(a[1]>a[0])
            min=a[0];
        else
            min=a[1];
        if(a[0]==0)
        {
           flag=0;//printf("%lld/%lld\n",b[0],b[1]);
            //continue;
        }
        //if(flag==1)
            if(a[0]!=0)
            {if(a[1]%min==0 && a[0]%min==0)
            {
                x=min;

             }
            else
            {
                for(i=min/2;i>1;i--)
                {
                    if(a[1]%i==0 && a[0]%i==0)
                    {
                        x=i;
                   // flag=1
                    break;
                    }
                }
            }}
            a[0]/=x;
            a[1]/=x;


        scanf("%lld",&b[0]);
        scanf("%c",&ch);
        x=1;
        if(ch=='/')
        {
            scanf("%lld",&b[1]);
        }
        else
            b[1]=1;
        x=1;
        if(b[1]>b[0])
            min=b[0];
        else
            min=b[1];
        if(b[0]==0)
        {
            flag=0;
            //continue;
        }
            if(b[0]!=0){
        if(b[1]%min==0 && b[0]%min==0)
       {
            x=min;

       }
        else
        {
            for(i=min/2;i>1;i--)
            {
                if(b[1]%i==0 && b[0]%i==0)
                {
                    x=i;
                   // flag=1
                    break;
                }
            }
        }}

        b[0]/=x;
        b[1]/=x;
        x=1;
        if(a[1]>b[1])
            min=b[1];
        else
            min=a[1];
        if(b[1]%min==0 && a[1]%min==0)
       {
            x=min;

       }
        else
        {
            for(i=min/2;i>1;i--)
            {
                if(a[1]%i==0 &&b[1]%i==0)
                {
                    x=i;
                   // flag=1
                    break;
                }
            }
        }
        a[1]/=x;
        b[1]/=x;
        if(c[1]<0)
            {
                c[1]*=-1;
                c[0]*=-1;
            }
        //printf("%lld %lld  %lld %lld ",a[0],a[1],b[0],b[1]);

        //printf("%lld  %lld",a[1],b[1]);
        //scanf("%d/%d",&b[0],&b[1]);
        c[0]=a[0]*b[1]+b[0]*a[1];
        c[1]=b[1]*a[1]*x;
        if(flag==1){
        if(c[0]==0)
        {
              printf("0\n");
              continue;
        }
        x=1;
        if(c[1]>c[0])
            min=c[0];
        else
            min=c[1];

        if(c[1]%min==0 && c[0]%min==0)
       {
            x=min;

       }
        else
        {
            for(i=min/2;i>1;i--)
            {
                if(c[1]%i==0 && c[0]%i==0)
                {
                    x=i;
                   // flag=1
                    break;
                }
            }
        }
        c[0]/=x;
        c[1]/=x;
            if(c[1]<0)
            {
                c[1]*=-1;
                c[0]*=-1;
            }

        if(c[1]!=1 )
            printf("%lld/%lld\n",c[0],c[1]);
        else
            printf("%lld\n",c[0]);
         }
        if(flag==0)
        {
            if(a[1]<0)
            {
                a[1]*=-1;
                a[0]*=-1;
            }
            if(b[1]<0)
            {
                b[1]*=-1;
                b[0]*=-1;
            }
            if(a[0]==0)
            {
                if(b[0]==0)
                    printf("0\n");
                else
                {

                    if(b[1]!=1 )
                    {
                        printf("%lld/%lld\n",b[0],b[1]);
                    }
                    else
                        printf("%lld\n",b[0]);
                }
            }
            else
            {
                if(a[1]!=1 )
                printf("%lld/%lld\n",a[0],a[1]);
                else
                 printf("%lld\n",a[0]);
            }

        }
     }
    return 0;
}
