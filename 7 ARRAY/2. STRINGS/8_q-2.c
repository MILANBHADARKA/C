// enter one string in another string

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[100];

    printf("enter the string : ");
    gets(a);

    printf("enter the string that you want to add : ");
    char b[100];
    gets(b);

    printf("enter the index : ");
    int n;
    scanf("%d", &n);

    int length1 = strlen(a);
    int length2 = strlen(b);
    int i;

    if (n > length1)
    {
        int j = length1;
        for (i = 0; i < n - length1; i++)
        {
            a[j] = ' ';
            j++;
        }
    }

    length1 = strlen(a);

    for (i = length1; i >= n; i--)
    {
        a[i + length2] = a[i];
    }
    int j = n;
    for (i = 0; b[i] != '\0'; i++)
    {
        a[j] = b[i];
        j++;
    }
    
    printf("string after adding : \n");
    puts(a);

    return 0;
}
