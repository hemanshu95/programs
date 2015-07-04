#include<stdio.h>
int main()
{
        int n,i,h=0;
        scanf("%d",&n);
        for(i=1;;i++)
        {
            h=(i*(i+1)*(i+2))/6;


            if(h>n)
            {
                i--;
                break;
            }
            else if(h==n)
                break;

        }
        printf("%d",i);
        return 0;
}
