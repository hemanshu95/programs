#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[m][3],q,x,y,p,i;
    for(i=0;i<m;i++)
    {
        scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);

    }
    scanf("%d",&q);

    while(q--)
    {
        scanf("%d%d",&x,&y);
        int check(int x,int flag=1,int color=0)
        {
            int n=0;
          for(i=0;i<m;i++)
          {
              if(flag==1)
              {
                  if(a[i][0]==x)
                    {
                    if(a[i][1]==y)
                    {
                      n++;
                    }
                    else if(a[i][1]<y)
                    {
                      n+=check(a[i][1]);
                    }
                }
                if(a[i][1]==x)
               {
                  n+=check(a[i][1],0,a[i][2])
               }
            }
            else
            {
                if(a[i][2]==color)
                {
                    if(a[i][0]==x)
                    {
                    if(a[i][1]==y)
                    {
                      n++;
                    }
                    else if(a[i][1]<y)
                    {
                      n+=check(a[i][1]);
                    }
                    }
                    if(a[i][1]==x)
                {
                    n+=check(a[i][1],0,a[i][2])
                }
                }
            }
          }
          return n;
        }
        p=check(x);
        printf("%d\n",p);
    }
    return 0;
}
