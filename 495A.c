#include<stdio.h>
int main()
{
    int n;
    int a;
    int b;
    int a1,a11;
    scanf("%d",&n);
    a=n/10;
    b=n%10;
    switch(a)
    {
        case 0:a1=2;
            break;
        case 1:a1=7;
            break;
        case 2:a1=2;
            break;
        case 3:a1=3;
            break;
        case 4:a1=3;
            break;
        case 5:a1=4;
            break;
        case 6:a1=2;
            break;
        case 7:a1=4;
            break;
        case 8:a1=1;
            break;
        case 9:a1=2;
            break;

    }
    switch(b)
    {
        case 0:a11=2;
            break;
        case 1:a11=7;
            break;
        case 2:a11=2;
            break;
        case 3:a11=3;
            break;
        case 4:a11=3;
            break;
        case 5:a11=4;
            break;
        case 6:a11=2;
            break;
        case 7:a11=4;
            break;
        case 8:a11=1;
            break;
        case 9:a11=2;
            break;

    }
    a1*=a11;
    printf("%d",a1);
    return 0;
}
