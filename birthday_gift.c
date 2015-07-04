#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,y,i,j,l,d;
    float x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        x = sqrt(n);
        y=(int)x;
        i=0;
        j=0;
        if(x==(float)y)
            y--;
        l=y*y;
        d=n-l;
        if(y%2)
        {

            j=y+1;
            if(d<=y)
                i+=d;
            else
            {
                i+=(y+1);
                j-=d-(y+1);
            }

        }
        else
        {
            i=y+1;
            if(d<=y)
                j+=d;
            else
            {
                j+=(y+1);
                i-=d-(y+1);
            }
        }
        printf("%d %d\n",i,j);



    }
    return 0;
}
