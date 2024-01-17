// inserting a char in string at givin index

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[100];
    int i, n;

    printf("enter the string\n");
    gets(a);
    printf("the string is \n");
    puts(a);

    printf("enter the char that you want to insert : \n");
    char ch;
    scanf("%c", &ch);

    printf("enter the index where you want to insert char : ");
    scanf("%d", &n);
    printf("\n");

    int length = strlen(a);
    char temp;

    for (i = length; i >= n; i--)
    {
        a[i + 1] = a[i];
    }

    a[n]=ch;

    puts(a);

    return 0;
    
}
