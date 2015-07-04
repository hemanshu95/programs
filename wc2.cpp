#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int is_an(char s[],int f1,int f2,int size1)
{

    int i;
    int a[26]={0};
    //char a[101], b[101];
    for(i=0;i<size1;i++)
    {
        a[s[f1+i]-97]++;
        a[s[f2+i]-97]--;
    }
    for(i=0;i<26;i++)
    {
        if(a[i])
            return 0;
    }
    //cout<<"hell";
    return 1;
}
int main()
{
    int t,i,j,x,l,k,n;
    cin>>t;
    char s[101];
    while (t--)
    {
        cin>>s;
        l=strlen(s);
        n=0;
        for (i=0;i<l;i++)
        {
            for (j=i+1;j<l;j++)
            {
                x=l-j;
                for (k=0;k<x;k++)
                {
                    //cout<<k+1;
                    if (is_an(s,i,j,k+1))
                    {
                        n+=1;

                    }
                }
               // cout<<"\n";
            }
        }
        cout<<n;

    }

    return 0;
}
