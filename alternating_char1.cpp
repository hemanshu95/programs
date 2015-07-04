#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    char c,l;
    c=cin.get();
    while(t--)
    {
        n=0;
        c=cin.get();
        l='X';

        while(c!='\n')
        {

            if(l==c)
                n++;
            else
                l=c;
            c=cin.get();
        }
        cout<<n;
    }
    return 0;
}

