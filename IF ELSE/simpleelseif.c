#include <stdio.h>
int main(int argc, char const *argv[])
{
    int marks1, marks2;
    printf("enter marks of maths and science out of 100:");
    scanf("%d %d", &marks1, &marks2);
    printf("marks in math's=%d\n", marks1);
    printf("marks in science=%d\n"), marks2;

    if (marks1 > 100 || marks2 > 100)
    {
        printf("you entered wrong marks\n");
    }
    else
    {
        if (marks1 >= 90 && marks2 >= 90)
        {
            printf("you win ruppes 45\n");
        }

        else if (marks1 >= 90 || marks2 >= 90)
        {
            printf("you win ruppes 15\n");
        }

        else
        {
            printf("brtter luck next time\n");
        }
    }

    return 0;
}
