#include <stdio.h>
#include <string.h>

void spaceremove(char string[])
{
    int i;
    int index = 0;
    for (i = 0; string[i] == ' '; i++);

    for (; string[i] != '\0'; i++)
    {
        string[index] = string[i];
        index++;
    }
    string[index] = '\0';

    for (i = strlen(string) - 1; string[i] == ' '; i--);

    string[i + 1] = '\0';
}

void parser(char string[])
{
    int in = 0; // variable to track that e are in tag or not. tage means ex., <h1>
    int index = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }

        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0'; // this is very important.
    spaceremove(string);
}

int main(int argc, char const *argv[])
{
    char string[] = "<h1>     this is heading   </h1>";

    printf("before parser : ");
    puts(string);
    printf("\n\n");

    parser(string);

    printf("after parsed string is ~~%s~~\n\n", string);

    return 0;
}
