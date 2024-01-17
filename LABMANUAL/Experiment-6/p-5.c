#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int i,j;
    char a[1000];

    printf("enter string\n");
    gets(a);
    j=strlen(a)-1;

    for(i=j;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}
