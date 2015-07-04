#include<stdio.h>
#include<string.h>
struct h
{
    int a;
    int b;
    char c;
    char d;

};
int main()
{
    char a[50];
    FILE *f1=fopen("h2.dat","ab");
    struct h h1;
    scanf("%d %d %c %c",&h1.a,&h1.b,&h1.c,&h1.d);
    fwrite(&h1,sizeof(h1),1,f1);
    fclose(f1);
    f1=fopen("h2.dat","rb");


 /*   while(fread(&h1,sizeof(h1),1,f1)==1)
    {

     printf("%d %d %c %c\n",h1.a,h1.b,h1.c,h1.d);
    // fread(&h1,sizeof(h1),1,f1);
  //  h1=NULL;
    }
    fclose(f1);
    */gets(a);
    char b[100];
    gets(b);
    puts("h");
    puts(a);
    puts("h");
   // putchar(b[0]);
    // putchar(b[1]);
    printf("%s %s",a,b);
    puts(b);
    //puts (a);
    fputs(a,f1);
    fprintf(f1,"%d",3224);
    fputs(" dschello i m hemanshu \n hello i m there\n",f1);
    fclose(f1);
    f1=fopen ("h1.dat","rb");
    fgets(a,50,f1);
    puts(a);
    fgets(a,50,f1);
    puts(a);
    fclose(f1);
   f1=fopen("h1.dat","rb+");
   strcpy(a,"h");
   while(strcmp(a,"hemanshu")!=0)
   {
       fscanf(f1,"%s",a);
       printf("%s %ld",a,ftell(f1));
       fseek(f1,5,1);
   }
   fclose(f1);
    return 0;
}
