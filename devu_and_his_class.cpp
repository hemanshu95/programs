#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
char a[100000],b[100000];
int main()
{
    int t,d,l,B,G,n,n1,n2,i,j;
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%d",&d);
        scanf("%s",a);
        l=strlen(a);
        B=0;
        G=0;
        if (d==0)
        {
            for(i=0;i<l;i++)
            {
                if(a[i]=='B')
                    B++;
                else
                    G++;
            }
            n=0;
            if(l%2)
            {
                if(B!=(l)/2 && B!=(l+1)/2)
                {
                    printf("-1\n");
                    break;
                }
                else
                {
                    strcpy(b,a);
                    i=0;
                   if (B==(l+1)/2)
                   {
                        if(b[0]!='B')
                        {
                            for(i=0;i<l-1;i++)
                            {
                                if ( b[i]=='B'&& b[i]==b[i+1] )
                                {
                                    swap(b[i+1],b[0]);
                                    n++;
                                    break;
                                }
                            }
                        }
                        for(i=0;i<l-1;i++)
                        {
                            if(b[i]==b[i+1])
                            {
                                if(b[i]==b[i+2])
                                    for(j=i+1;j<l-1;j++)
                                    {
                                        if(b[j]==b[j+1]&& b[j]!=b[i])
                                        {
                                            swap(b[j+1],b[i+1]);
                                            n++;
                                            ////i=i+2;
                                            break;
                                        }

                                    }
                                else
                                    for(j=i+1;j<l-1;j++)
                                    {
                                        if(b[j]!=b[i])
                                        {
                                            swap(b[j],b[i+1]);
                                            n++;
                                            ////i=i+1;
                                            break;
                                        }

                                    }

                            }
                        }
                   }
                   else
                    {
                        if(b[0]!='G')
                        {
                            if(b[1]=='B')
                                for(i=0;i<l-1;i++)
                                {
                                    if ( b[i]=='G'&& b[i]==b[i+1] )
                                    {
                                        swap(b[i+1],b[0]);
                                        n++;
                                        break;
                                    }
                                }
                            else
                            {
                                for(i=0;i<l-1;i++)
                                {
                                    if ( b[i]=='G')
                                    {
                                        swap(b[i],b[0]);
                                        n++;
                                        break;
                                    }
                                }
                            }
                        }
                        for(i=0;i<l-1;i++)
                        {
                            if(b[i]==b[i+1])
                            {
                                if(b[i]==b[i+2])
                                    for(j=i+1;j<l-1;j++)
                                    {
                                        if(b[j]==b[j+1]&& b[j]!=b[i])
                                        {
                                            swap(b[j+1],b[i+1]);
                                            n++;
                                            //i=i+2;
                                            break;
                                        }

                                    }
                                else
                                    for(j=i+1;j<l-1;j++)
                                    {
                                        if(b[j]!=b[i])
                                        {
                                            swap(b[j],b[i+1]);
                                            n++;
                                            //i=i+1;
                                            break;
                                        }

                                    }

                            }
                        }
                    }

                }
                printf("%s  %d",b,n);
            }
            else
            {
                if(B!=(l/2))
                    printf("-1\n");
                else
                {
                    strcpy(b,a);
                    n1=0;
                    if(b[0]!='B')
                    {
                        for(i=0;i<l-1;i++)
                        {
                            if ( b[i]=='G'&& b[i]==b[i+1] )
                            {
                                swap(b[i+1],b[0]);
;                               n1++;
                                break;
                            }
                        }
                    }
                    for(i=0;i<l-1;i++)
                    {
                        if(b[i]==b[i+1])
                        {
                            if(b[i]==b[i+2])
                                for(j=i+1;j<l-1;j++)
                                {
                                    if(b[j]==b[j+1]&& b[j]!=b[i])
                                    {
                                        swap(b[j+1],b[i+1]);
                                        n1++;
                                        //i=i+2;
                                        break;
                                    }
                                }
                            else
                                for(j=i+1;j<l-1;j++)
                                {
                                    if(b[j]!=b[i])
                                    {
                                        swap(b[j],b[i+1]);
                                        n1++;
                                        //i=i+1;
                                        break;
                                    }
                                }

                        }
                    }
                    strcpy(b,a);
                    n2=0;
                    if(b[0]!='G')
                    {
                        for(i=0;i<l-1;i++)
                        {
                            if ( b[i]=='B'&& b[i]==b[i+1] )
                            {
                                swap(b[i+1],b[0]);
;                               n2++;
                                break;
                            }
                        }
                    }
                    for(i=0;i<l-1;i++)
                    {
                        if(b[i]==b[i+1])
                        {
                            if(b[i]==b[i+2])
                                for(j=i+1;j<l-1;j++)
                                {
                                    if(b[j]==b[j+1]&& b[j]!=b[i])
                                    {
                                        swap(b[j+1],b[i+1]);
                                        n2++;
                                        //i=i+2;
                                        break;
                                    }
                                }
                                else
                                    for(j=i+1;j<l-1;j++)
                                    {
                                        if(b[j]!=b[i])
                                        {
                                            swap(b[j],b[i+1]);
                                            n2++;
                                            //i=i+1;
                                            break;
                                        }
                                    }
                        }
                    }
                    printf("%d",min(n1,n2));
                }
            }

        }
    }
    return 0;
}
