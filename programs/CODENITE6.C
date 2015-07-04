#include<stdio.h>

int main()
{
    int n,i,j,k,l,lag=0;
    scanf("%d",&n);
    int A[n],s1,s2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        if(i>0)
        {


        if(A[i]==A[i-1])
            lag=1;}
    }
    if(lag==1)
    {printf("YES");
                            return 0;
    }

    for(i=0;i<n-2;i++)
    {
        for(j=i+2;j<n;j++)
        {
            s1=A[i]+A[j];
            for(k=i;k<n;k++)
            {
                for(l=j;l>k;l--)
                {

                    if(i!=k || j!=l)
                    {
                        s2=A[k]+A[l];
                        if(s1==s2)
                        {
                            printf("YES");
                            return 0;
                        }
                        else if(s1>s2)
                            break;

                    }


                }
            }
        }
    }
    printf("NO");
    return 0;
}
