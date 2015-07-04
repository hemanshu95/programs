#include<stdio.h>
int B[58]={0},C[58]={0},b,c;
int main()
{
    int t,n,k,i,j,flag,x,r,temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&c,&b);
        n=0;
        for(i=0;i<c;i++)
        {
            scanf("%d",temp);
            C[temp]=1
        }
        for(i=0;i<b;i++)
        {
            scanf("%d",temp);
            B[temp]=1
        }
        i=0;
        k=0;
        j=0;
        while(n<57)
        {
            if(i<c && C[i]-n<=6)
            {
                n=C[i];
                //printf("%d  %d\n",C[i],n);
                i++;
                k++;
            }
            else
            {
                while(j<b&&B[j]<=n)
                {
                    j++;
                }
                if(j<b)
                {
                    if (j<b && B[j]-n<=6 && B[j]-n>=0 )
                    {
                        flag=0;

                        x=5;

                        for(r=6;r>1;r--)
                        {
                            if(n+r>57)
                                continue;
                            x=5;
                            flag=0;
                            //printf("pol %d\n",r);
                            for(;x>=0;x--)
                            {
                                if(j+x<b )
                                {
                                    if(B[j+x]==n+r)
                                    {
                                        //printf("hello %d \n",n+r);

                                        //x--;
                                        flag=1;
                                        break;
                                    }
                                }
                            }
                           // if(flag==0)
                            //{
                             //   break;
                            //}
                            if(x==-1 && flag==0)
                                break;
                        }
                        //printf("%d %d %d \n",j,x,r);
                        //printf("%d %d \n",j+x,n+r);
                        if(r==0)
                        {

                        }
                        if(j<b && x==-1)
                        {
                            n=n+r;
                            k++;
                          //  printf("%d\n",n);
                        }
                    }
                }
                else
                {
                    if(n+6 < 58)
                        n=n+6;
                    else
                        n=57;
                 //printf("%d\n",n);
                    k++;
                }

            }
        }
        printf("%d\n",k+1);
    }
}
