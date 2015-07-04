#include<stdio.h>
int main()
{
    int n,a[3]={},k,d,i,j;
    scanf("%d",&n);
    if (n>4)
    {

        k=(n-4)/3;
        a[0]+=(k+1);
        a[1]+=(k+1);
        a[2]+=(k+1);

        d=(n-4)%3;
        switch (d)
        {
            case 2:a[1]++;
            case 1:a[0]++;
        }
    }
    else
        switch (n)
        {
            case 4: a[2]=1;
            case 3:a[1]=1;
            case 2:a[1]=1;
            case 1:a[0]=1;
        }
    printf("+");
    for(i=0;i<24;i++)
        printf("-");
        printf("+");
        printf("\n");
    for(j=0;j<3;j++)
    {

        if(j==2)
        {
            printf("|");
            if(n>2)
                printf("O");
            else
                printf("#");
            printf(".......................|\n");
        }
        printf("|");
        for(i=0;i<11;i++)
        {
            if(a[j]>0 )
            {
                printf("O.");
                a[j]--;
            }
            else
                printf("#.");
        }
        printf("|");
        if(j==0)
            printf("D");
        else
            printf(".");
        printf("|");
        if(j==0||j==2)
            printf(")");
             printf("\n");
    }
    printf("+");
     for(i=0;i<24;i++)
        printf("-");
        printf("+");
        printf("\n");
return 0;

}
