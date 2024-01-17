// WITH GOTO

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int generaterandomnumber(int n)
{
    srand(time(NULL));

    return rand() % n;
}
void winner(int user,int computer)
{
    if (user > computer)
    {
        printf("user win the game with %d-%d\n\n", user, computer);
    }
    else
    {
        printf("computer win the game with %d-%d\n\n", computer, user);
    }
}

int main(int argc, char const *argv[])
{
    char name[100];
    printf("enter you name : ");
    gets(name);
    printf("Hello %s ",name);
    printf("welcome to the game!\n");
    printf("\n\n");

    int i, j, p, q, computer, user;

    start:
    computer=0;
    user=0;
    for (i = 0; i < 3; i++)
    {
    generateu:
    generate:
        printf("enter 0 for rock, 1 for paper, 2 for scissor : ");
        scanf("%d", &p);

        if (p > 2 || p < 0)
        {
            printf("enter valid number\n");
            goto generateu;
        }

        if (p == 0)
        {
            printf("user choose rock\n");
        }
        else if (p == 1)
        {
            printf("user choose paper\n");
        }
        else if (p == 2)
        {
            printf("user choose scissors\n");
        }

        q = generaterandomnumber(2);

        if (q == 0)
        {
            printf("computer choose rock\n");
        }
        else if (q == 1)
        {
            printf("computer choose paper\n");
        }
        else if (q == 2)
        {
            printf("computer choose scissors\n");
        }

        if (p == q)
        {
            printf("TIE\n\n");
            goto generate;
        }

        if (p - q == 1 || p - q == -1)
        {
            if (p > q)
            {
                printf("user win\n");
                user++;
            }
            else
            {
                printf("computer win\n");
                computer++;
            }
        }
        else if (p - q == 2 || p - q == -2)
        {
            if (p > q)
            {
                printf("computer win\n");
                computer++;
            }
            else
            {
                printf("user win\n");
                user++;
            }
        }
        printf("\n\n");
    }

    winner(user,computer);

    int r;
    number:
    printf("if you want to exit game enter 0 otherwise enter 1 : ");
    scanf("%d",&r);

    if(r<0 || r>1)
    {
        printf("enter valid number\n");
        goto number;
    }
    else if(r==0)
    {
        exit(0);
    }
    else if(r==1)
    {
        goto start;
    }

    return 0;
}
