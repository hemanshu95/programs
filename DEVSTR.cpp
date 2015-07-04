#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
using namespace std;
int main()
{
    int t,n,k,i,R,Q,N,x,l,j,x1,x2;
    char str[100002],b[100002];
    int a[100002];
    sd(t);
    while(t-->0)
    {
        sd(n);
        sd(k);
        ss(str);
        strcpy(b,str);
        x=0;

        if(k==1)
        {
            x1=0;
            x2=0;
            for(i=1;i<n;i++)
            {
                if(str[i]==str[i-1])
               {
                    if(str[i]=='1')
                        str[i]='0';
                    else
                        str[i]='1';
                    x1++;
                }
            }
            if(b[0]=='1')
                b[0]='0';
            else
                b[0]='1';
            x2++;
            for(i=1;i<n;i++)
            {
                if(b[i]==b[i-1])
               {
                    if(b[i]=='1')
                        b[i]='0';
                    else
                        b[i]='1';
                    x2++;
                }
            }
            if(x1<x2)
                printf("%d\n%s\n",x1,str);
            else
                printf("%d\n%s\n",x2,b);
        }
        else
        {
            l=0;
            x=0;
            for(i=0,j=0;i<n;i++)
            {
                if(str[i]!=str[l])
                {
                    a[j]=i-l;
                    //cout<<j<<"  "<<a[j]<<endl;
                    l=i;
                    j++;
                }

            }
            a[j]=i-l;
            N=j;
            R=-1;
            Q=k+1;
            for(j=0;j<=N;j++)
            {
                i=Q;
                while(i<a[j])
                //for(i=Q;i<a[j];i+=Q)
                {
                    if(str[i+R]=='1')
                        str[i+R]='0';
                    else
                        str[i+R]='1';
                    x++;
                    i+=Q;
                }
                if(i==a[j])
                {
                    if(str[i+R-1]=='1')
                        str[i+R-1]='0';
                    else
                        str[i+R-1]='1';
                    x++;
                }
                R+=a[j];
            }

            printf("%d\n%s\n",x,str);
        }

       // cout<<x<<endl;
        //cout<<str<<endl;
    }
    return 0;
}
