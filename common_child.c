#include<stdio.h>
#include<stdlib.h>
#include<math.h>

char a[5001],b[5001];
int cc(int x,int y)
{
    int ma;
    if(a[x]=='\0'||b[y]=='\0')
        return 0;
    if(a[x]==b[y])
        ma=1+cc(x+1,y+1);
      ma=max(cc(x,y+1),cc(x+1,y));
    return ma;
    /*int m=n,ma=n;
    int i=x, j=y;
    for(i=x;a[i]!='\0';i++)
    {

        for(j=y;b[j]!='\0';j++)
        {
           if(a[i]==b[j])
           {
               m=cc(n+1,i+1,j+1);
               if(m>ma)
                    ma=m;
           }
        }
    }*/

}

int main()
{

    scanf("%s",a);
    scanf("%s",b);
    printf("%d",cc(0,0));
    return 0;
}
