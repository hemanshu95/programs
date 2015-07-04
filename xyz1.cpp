//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
bool a[10][10];
int main()
{
    int t,n,i,j,k,r,m;
    char q[100];
    sd(t);
    while(t-->0)
    {
        sd(n);
        for(j=0;j<n;j++)
        {
            ss(q);
            for(i=0;i<n;i++)
            {
                if(q[i]=='1')
                    a[j][i]=true;
                else
                    a[j][i]=false;

            }

        }
        r=0;
       /* printf("\n");
        for(j=0;j<n;j++)
        {
            for(i=0;i<n;i++)
                printf("%d",a[j][i]);
            printf("\n");
        }
        printf("\n");
        */

        //upper triangle
        for(j=0;j<n-1;j++)
        {
            k=0;
            for(i=j+1;i<n;i++)
            {
                if(a[j][i])
                    k=i;
            }
            if(k>0)
            {

                for(m=j;m<=k;m++)
                {
                    if(a[j][m])
                        a[j][m]=false;
                    else
                        a[j][m]=true;
                }
                for(m=j+1;m<=k;m++)
                {
                    if(a[m][k])
                        a[m][k]=false;
                    else
                        a[m][k]=true;
                }

                r++;
                j--;

            }
        }
        /*
        for(j=0;j<n;j++)
        {
            for(i=0;i<n;i++)
                printf("%d",a[j][i]);
            printf("\n");
        }
        */
       // printf("sfd%d",r);


        //lower triangle
        for(j=n-1;j>0;j--)
        {
            k=j;
            for(i=0;i<j;i++)
            {
                if(a[j][i])
                {
                    k=i;
                    break;
                }

            }
            //printf(" sfd%d ",k);
            if(k<j)
            {
                //intf(" sfd%d ",k);

                for(m=k;m<=j;m++)
                {
                    if(a[j][m])
                        a[j][m]=false;
                    else
                        a[j][m]=true;
                }
                for(m=j-1;m>=k;m--)
                {
                    if(a[m][k])
                        a[m][k]=false;
                    else
                        a[m][k]=true;
                }

                r++;
                j--;

            }
        }
        /*printf("\n");
        for(j=0;j<n;j++)
        {
            for(i=0;i<n;i++)
                printf("%d",a[j][i]);
            printf("\n");
        }
        printf("\n");
        printf("sfd%d",r);*/
        //diagonal elements
        for(m=0;m<n;m++)
        {
            if(a[m][m])
                r++;
        }
        printf("%d\n",r);
    }
    return 0;
}
