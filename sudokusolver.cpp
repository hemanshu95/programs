#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
class sudoku
{
    int grid[9][9];
    public:
    sudoku()
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                grid[i][j]=0;

            }
        }

    }

    void initializeSudokuGrid()
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                cin>>grid[i][j];
            }
        }


    }

    void printSudokuGrid()
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    bool findEmptyGridSlot(int &row, int &col)
    {
        row=0;
        col=0;
        while(grid[row][col]>0)
        {
            col++;
            if(col>8)
            {
                row++;
                col=0;
            }
            if(row>8)
                return false;
        }
        //cout<<row<<","<<col<<endl;
        return true;
    }

    bool canPlaceNum(int row, int col, int num)
    {

        for(int i=0;i<9;i++)
        {
            if(grid[row][i]==num && i!= col)
            {
               // if(num==2 && row==3 && col ==0)
               // cout<<"col\n";
                return false;
            }

        }

        for(int i=0;i<9;i++)
        {
            if(grid[i][col]==num && i!=row)
                {
                    //if(num==2 && row==3 && col ==0)
                    //cout<<"row\n";
                    return false;
                }

        }
        int x=(row/3)*3,y=(col/3)*3;
       // cout<<x<<"--"<<row<<"  "<<y<<"--"<<col<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(grid[x+i][y+j]==num)
                {
                    //if(num==2 && row==3 && col ==0)
                    //cout<<x<<","<<y<<"box\n";
                    return false;
                }

            }
        }
        return true;
    }

    bool solveSudoku()
    {
        int row,col;
        if(findEmptyGridSlot(row, col))
        {
            for(int i=1;i<=9;i++)
            {
                /*if(i==1 && row==0 && col ==1)
                {    cout<<"51\n";
                    printSudokuGrid();
                }
                if(i==2 && row==3 && col ==0)
                {    cout<<"230\n";
                    printSudokuGrid();
                    cout<<canPlaceNum(row,col,i);
                }*/
                if(canPlaceNum(row,col,i))
                {
                   /* if(i==2 && row==3 && col ==0)
                    {
                        cout<<"hello 230\n";

                        printSudokuGrid();
                    }*/
                    grid[row][col]=i;

                   /* if(grid[1][0]==1)//row==1 && col ==0)
                    {
                    cout<<row<<","<<col<<","<<i<<endl;
                    printSudokuGrid();
                    }*/
                    if(solveSudoku())
                    {
                      //  printSudokuGrid();
                       // cout<<"fhsdjak";
                        return true;

                    }
                    grid[row][col]=0;
                }
            }
            return false;
        }
      //  cout<<"gfchvjbkl";
        return true;
    }

};


int main()
{
    sudoku S;
    S.initializeSudokuGrid();
    S.printSudokuGrid();
    //cout<<"hello";
    S.solveSudoku();
    S.printSudokuGrid();
    return 0;
}
