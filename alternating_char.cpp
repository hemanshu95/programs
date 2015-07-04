#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int t,n;
    char s,p='p';
    cin>>t;
    //s=getch();
    while(t--)
    {
        n=0;
        while(1)
        {
            s=getch();
            if(s=='\n')
                break;
            if(s==p)
                n++;
            else
                p=s;
        }
        cout<<n<<"\n";

    }
    return 0;
}
