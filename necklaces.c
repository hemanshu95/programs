#include<stdio.h>
int main()
{
    int t,n,i,last,thi,msum=0,change=0,w;
    scanf("%d",&t);
    char c='a';
    printf("helo");
    while(t--)
    {
         scanf("%d",&n);
         char a[n],c='w';
         scanf("%s",a);
        printf("hello");
         last=0;
         msum=0;
         thi=0;
         w=0;
         change=0;
        i=0;
         while(i<n)
         {printf("h");
             if(a[i]!='w')
            {

                 if(i<n-1)
                     c=a[i];
                break;
            }
             i++;
             thi++;
         }
         if(thi==n)
         {
             printf("%d\n",n);
             continue;
        }
         for(;i<n;i++)
         {printf("m");

             if(a[i]==c)
             {
                 thi++;

             }
             else if(a[i]=='w')
             {
                 thi++;
                 w++;
             }
             else
                change=1;
             if(change==1)
             {

                 if((last+thi)>msum)
                    msum=last+thi-w;
                 last=thi;
                 change=0;
                 c=a[i];
                 thi=1+w;
                 w=0;
             }
         if(thi>=n)
         {
             printf("%d\n",n);
             continue;
        }
         }
         i=0;
         while(change==0)
         {
             if(a[i]==c)
            {
                thi++;
            }
            else if(a[i]=='w')
            {
                last++;
                thi++;
                w++;
            }
            else
                change=1;
            if(thi>=n)
         {
             msum=n;
             last=0;
             thi=0;
             w=0;
             break;
        }

         }
         if((last+thi-w)>msum)
                msum=last+thi-w;
        printf("%d\n",msum);
    }

    return 0;
}
