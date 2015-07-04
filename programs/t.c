
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

findPalind(char *arr)
{

    int flag = 1,i=0;
    int l=strlen(arr),c[26]={},c1=0;
    while(arr[i]!='\0')
    {
        c[arr[i]-97]++;
        i++;
    }
    for(i=0;i<26;i++)
    {
        if(c[i]%2)
            c1++;
    }
    if(l%2 && c1==1)
        flag=0;
    else
    if(!(l%2) && !c1)
        flag=0;
    // Find the required answer here. Print Yes or No at the end of this function depending on your inspection of the string
    if (flag==0)
        printf("YES\n");
    else
        printf("NO\n");

    return;
}
int main() {

    char arr[100001];
    scanf("%s",arr);
    findPalind(arr);
    return 0;
}
