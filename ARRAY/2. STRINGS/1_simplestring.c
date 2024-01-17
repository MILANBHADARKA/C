#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int i,j;
    char arr[]={'a','t','l','a','s','\0'};   //in this style computer NOT take auto null char at the end of array.

    printf("%c\n",arr[1]);

    for(i=0;i<5;i++)
    {
        printf("%c",arr[i]);
    }
    printf("\nassci value\n");
    printf("a=%d\n",'a');
    printf("z=%d\n",'z');
    printf("A=%d\n",'A');
    printf("Z=%d\n",'Z');
    printf("0=%d\n",'0');
    printf("9=%d\n",'9');
    printf("null character=%d\n",'\0');
                            
    char a[]="HELLO WORLD";    //in this style computer take auto null char at the end of string.
                               //here not need to give size of char array.
    i=0;
    while(a[i]!='\0')    //because last char is null char. we did this also in FOR loop.
    {
        printf("%c",a[i]);
        i++;
    }
    printf("\n");

    // printf("\nchange individual element \n\n");

    // a[2]='a';
    // a[5]='b';

    // for(i=0;a[i]!='\0';i++)
    // {
    //     printf("%c",a[i]);
    // }

    //we can print string like shown in below

    printf("\n");
    printf("%s",a);
    
    //we can use scanf for input string but there some problem that we not do SPACE in scanf because if we press space then computer auto exit current scanf function
    //if we want to use scanf then use  %[^\n]s now we can read full string with space.
    printf("\ninput and output string without LOOP \n");

    char b[100];
    printf("enter the string\n");
    gets(b);
    printf("\n");
    puts(b);



    return 0;
}
