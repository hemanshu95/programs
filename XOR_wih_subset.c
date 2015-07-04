#include<stdio.h>
#include<math.h>
int convert_binary(int temp,int b[])
{
    int i=0;
    while(temp>0)
    {
        b[i]=temp%2;
        temp/=2;
        i++;
    }
    return 0;
}
int addone(int *b)
{
    int flag=1,k=0;

    do
    {
        if(*(b+k)==1)
        {

            *(b+k)=0;
            k++;
        }
        else
        {
            *(b+k)=1;
            flag=0;
        }

    }while(flag==1);
    return 0;
}
int xor(int a[],int b[])
{
    int i;
    for(i=0;i<11;i++)
    {
        if(a[i]%2!=b[i]%2)
            {
                a[i]=1;
            }
        else
            a[i]=0;

    }
    return 0;
}
int xor2(int a[],int b[])
{
    int i;int k=1,x=0;
    for(i=0;i<12;i++)
    {
        if(a[i]%2!=b[i]%2)
            {
                a[i]=1;
                x+=k;
            }
        else
            a[i]=0;
        k*=2;
    }
    return x;
}
int print_binary(int a[])
{
    int i;
    for(i=0;i<11;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int t,i,m;
    scanf("%d",&t);
    int a[1000][12]={},b[12];
    int n,k,max,j,r,temp,kb[12],f[12];
    for(i=0;i<t;i++)
    {
        max=0;
        for(j=0;j<12;j++)
        {
            f[j]=0;
            b[j]=0;
        }
        scanf("%d%d",&n,&k);
        convert_binary(k,kb);
        //print_binary(kb);
        for(j=0;j<n;j++)
        {
            scanf("%d",&temp);
            convert_binary(temp,a[i]);
            //print_binary(a[i]);
        }
        int q=pow(2,n);

        for(r=0;r<q;r++)
        {
             for(m=0;m<11;m++)
                {
                    f[m]=0;

                }

            for(j=0;j<n;j++)
            {

                if(b[j]==1)
                    {
                        xor(f,a[j]);
                        //print_binary(f);
                    }
                //printf(" ");
            }
            addone(b);
            temp=xor2(f,kb);
            if(temp>max)
                max=temp;
        }
        printf("%d\n",max);
    }
    return 0;
}
