#include<stdio.h>
int main()
{

    FILE *fp;
    fp=fopen("sam.txt","w") ;
    int i=2 ;
    char c='a' ;
    char j ;
    if(fprintf(fp,"%c ",c) )
        printf("success\n") ;
    fclose(fp) ;
    fp=fopen("sam.txt","r");
    while(feof(fp)==0)
    {
    j=getc(fp) ;
    printf("%c",j) ;

    //fseek(fp,-1*sizeof(i),2) ;
    //j=ftell(fp) ;


    }
    fclose(fp) ;



    return 0 ;

}
