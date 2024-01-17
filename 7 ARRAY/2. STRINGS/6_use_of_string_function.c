#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char s1[100];
    char s2[100];
    int i,j;

    printf("enter s1");
    gets(s1);
    printf("enter s2");
    gets(s2);
    printf("\n");

    printf("use of strlen() \n");
    int len = strlen(s1);
    printf("length of s1 is %d\n\n",len);

    printf("use of strcpy() \n");
    strcpy(s2,s1);
    printf("now s2 is \n");
    puts(s2);
    printf("\n");

    printf("use of strrev() \n");
    printf("%s\n",strrev(s1));
    printf("\n");

    printf("use of strcat() \n");
    strcat(s1,s2);   //joint s2 in s1 at the end of s1.
    puts(s1);
    printf("\n");





    return 0;
}
