    #include<stdio.h>


    int main(){
    long int n,m=0,k=0;
    scanf("%ld",&n);
    int i;
    for(i=0;i<n;i++)
    {
    scanf("%ld",&k);
    if(m<k)
    m=k;
    }
    printf("%ld",m);
    return 0;
    }
