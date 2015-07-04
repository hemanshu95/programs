#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
class knightTour
{
    int grid[100][100];
    int n,n2;
    int x,y;
    int tot;

    public:
    knightTour()
    {
        cin>>n;
        cin>>x>>y;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                grid[i][j]=0;
        }
        grid[x][y]=1;
        tot=1;
        n2=n*n;
    }

    void printGrid()
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<grid[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl;
    }
    bool checkul()
    {
        if(x<2)
            return false;
        if(y==0)
            return false;
        x-=2;
        y--;
        if(grid[x][y]==0)
            return true;
        x+=2;
        y++;
        return false;
    }
    bool checkur()
    {
        if(x<2)
            return false;
        if(y==n-1)
            return false;
        x-=2;
        y++;
        if(grid[x][y]==0)
            return true;
        x+=2;
        y--;

        return false;
    }
    bool checkdl()
    {
        if(x>=n-2)
            return false;
        if(y==0)
            return false;
        x+=2;
        y--;
        if(grid[x][y]==0)
            return true;
        x-=2;
        y++;
        return false;
    }
    bool checkdr()
    {
        if(x>=n-2)
            return false;
        if(y==n-1)
            return false;
        x+=2;
        y++;
        if(grid[x][y]==0)
            return true;
        x-=2;
        y--;

        return false;
    }

    bool checklu()
    {
        if(y<2)
            return false;
        if(x==0)
            return false;
        y-=2;
        x--;
        if(grid[x][y]==0)
            return true;
        y+=2;
        x++;
        return false;
    }
    bool checkld()
    {
        if(y<2)
            return false;
        if(x==n-1)
            return false;
        y-=2;
        x++;
        if(grid[x][y]==0)
            return true;
        y+=2;
        x--;
        return false;
    }

    bool checkrd()
    {
        if(y>=n-2)
            return false;
        if(x==n-1)
            return false;
        x++;
        y+=2;
        if(grid[x][y]==0)
            return true;
        x--;
        y-=2;
        return false;
    }
    bool checkru()
    {
        if(y>=n-2)
            return false;
        if(x==0)
            return false;
        y+=2;
        x--;
        if(grid[x][y]==0)
            return true;
        y-=2;
        x++;
        return false;
    }

    bool solve()
    {
        if(tot>=n2)
            return true;
        if(checkul())
        {
           /* if(tot==6)//tot==61 ||tot==62 ||tot==60)
                cout<<x<<","<<y<<","<<tot<<endl;
            */
            grid[x][y]=++tot;
            int x1=x,y1=y;
            if(solve())
                return true;

            x=x1;
            y=y1;
            grid[x][y]=0;
            x+=2;
            y++;
            tot--;
        }
        if(checkur())
        {

            /*if(tot==6)//1 ||tot==62 ||tot==60)
            {
                cout<<x<<","<<y<<","<<tot<<endl;
                printGrid();
            }*/
            grid[x][y]=++tot;
            int x1=x,y1=y;

            if(solve())
                return true;

            x=x1;
            y=y1;

            grid[x][y]=0;
            x+=2;
            y--;
            tot--;

        }
        if(checkdl())
        {

            //if(tot==6)//1 ||tot==62 ||tot==60)
               // cout<<x<<","<<y<<","<<tot<<endl;
            grid[x][y]=++tot;
            int x1=x,y1=y;

            if(solve())
                return true;

            x=x1;
            y=y1;

            grid[x][y]=0;
            x-=2;
            y++;
            tot--;
        }
        if(checkdr())
        {

            //if(tot==6)//1 ||tot==62 ||tot==60)
              //  cout<<x<<","<<y<<","<<tot<<endl;
            //printGrid();
            grid[x][y]=++tot;
            int x1=x,y1=y;

            if(solve())
                return true;

            x=x1;
            y=y1;

            grid[x][y]=0;
            x-=2;
            y--;
            tot--;
        }
        if(checklu())
        {

           // if(tot==6)//1 ||tot==62 ||tot==60)
                //cout<<x<<","<<y<<","<<tot<<endl;
            grid[x][y]=++tot;
            int x1=x,y1=y;

            if(solve())
                return true;

            x=x1;
            y=y1;

            grid[x][y]=0;
            y+=2;
            x++;
            tot--;
        }
        if(checkld())
        {

            //if(tot==6)//1 ||tot==62 ||tot==60)
             //   cout<<x<<","<<y<<","<<tot<<endl;
            grid[x][y]=++tot;
            int x1=x,y1=y;

            if(solve())
                return true;

            x=x1;
            y=y1;

            grid[x][y]=0;
            y+=2;
            x--;
            tot--;
        }
        if(checkru())
        {

            //if(tot==6)//1 ||tot==62 ||tot==60)
              //  cout<<x<<","<<y<<","<<tot<<endl;
            grid[x][y]=++tot;

            int x1=x,y1=y;

            if(solve())
                return true;

            x=x1;
            y=y1;

            grid[x][y]=0;
            y-=2;
            x++;
            tot--;
        }
        if(checkrd())
        {

           // if(tot==6)//1 ||tot==62 ||tot==60)
              //  cout<<x<<","<<y<<","<<tot<<endl;
            //printGrid();
            grid[x][y]=++tot;
            int x1=x,y1=y;

            if(solve())
                return true;

            x=x1;
            y=y1;

            grid[x][y]=0;
            y-=2;
            x--;
            tot--;
        }
        return false;
    }
};
int main()
{
    knightTour S;
    S.solve();
    S.printGrid();
    return 0;
}
