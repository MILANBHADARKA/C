#include <stdio.h>
void fun(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

void func(char *str)
{
    while (*str != '\0')
    {
        printf("%c", *str);
        str++;
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    char str[] = {'m', 'i', 'l', 'a', 'n', '\0'}; // or// char str[]="milan";

    fun(str);
    func(str);
    return 0;
}
