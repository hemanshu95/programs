#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t,A[10000],l,i,x,sum=0,N,q,Q,I,J,j;
    char s[100];
    scanf("%d",&t);
    x=t;
    while(t-->0)
    {
        scanf("%d",&l);
        for(i=0;i<l;i++)
            scanf("%d",&A[i]);
        scanf("%d",&q);
        printf("Case %d:\n",x-t);
        for(j=0;j<q;j++)
        {
            cin>>Q>>I>>J;
            if(Q!=2)
                cin>>N;

            if (Q==0)
            {
                for(i=I-1;i<J;i++)
                {
                    //if(A[i]>=I && A[i]<=J)
                        A[i]=N;
                }
            }
            if (Q==1)
            {
                for(i=I-1;i<J;i++)
                {
                    //if(A[i]>=I && A[i]<=J)
                        A[i]+=N;
                }
            }
            if (Q==2)
            {
                sum=0;
                for(i=I-1;i<J;i++)
                {
                    //if(A[i]>=I && A[i]<=J)
                        sum+=(((A[i]%1000000007)*A[i])%1000000007);
                }
                printf("%d\n",sum);
            }
        }

    }
    return 0;
}
