#include<stdio.h>
char a[100001];
int fs1[100001],fl1[100001];
int main()
{
    int  t,n,k,q,i,j,l,r,x1,x0;
    long long z;
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%d%d%d",&n,&k,&q);
        scanf("%s",a);
        fs1[0]=0;
        fl1[n+1]=0;
        for(i=1,j=n;i<=n;i++,j--)
        {
            if (a[i-1]=='1')
                fs1[i]=fs1[i-1]+1;
            else
                fs1[i]=fs1[i-1];
            if (a[j-1]=='1')
                fl1[j]=fl1[j+1]+1;
            else
                fl1[j]=fl1[j+1];


        }

        while(q-->0)
        {


            z=0;
            scanf("%d%d",&l,&r);
            //if(r-l<k || ((fs1[r]-fs1[l-1]<k)&& (r-l+1-fs1[r]-fs1[l-1])<k))
             //   z=((r-l+1)*(r-l+2))/2;
           // else
            {
                for(i=l;i<=r;i++)
                {
                    x1=fs1[n]-fs1[i-1];
                    x0=(n-fs1[n])-((i-1)-fs1[i-1]);
                    if(r-i+1<=k)
                    {
                        z+=r-i+1;
                        continue;
                    }

                //printf("%d %d       ",x1,x0);
                    for(j=i;j<=r;j++)
                    {
                        //printf("%d %d %d %d \n ",x1-fl1[j+1],x0-(n-(j)-fl1[j+1]),fl1[j+1],j);
                        if(x1-fl1[j+1]>k || x0-(n-(j)-fl1[j+1])>k )
                            break;
                        else
                            z++;

                    }
                }
            }
            printf("%lld\n",z);
        }
    }
    return 0;
}
