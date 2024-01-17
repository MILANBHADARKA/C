// WITHOUT GOTO

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int restart()
{
    int r;
    do
    {
        printf("IF YOU WANT TO CONTINUE GAME ENTER 1 OTHERWISE ENTER 0: ");
        scanf("%d", &r);

        if (r < 0 || r > 1)         printf("ENTER VALID NUMBER\n");
    }
    while(r < 0 || r > 1);

    return r;
}

void winner(int user, int computer)
{
    if (user > computer)   printf("*****USER WIN THE GAME WITH %d-%d\n\n", user, computer);
    else   printf("*****COMPUTER WIN THE GAME WITH %d-%d\n\n", computer, user);
}

int generaterandomnumber(int n)
{
    srand(time(NULL));
    int q = rand() % n;

    if (q == 0)        printf("COMPUTER --> ROCK\n");
    else if (q == 1)   printf("COMPUTER --> PAPER\n");
    else if (q == 2)   printf("COMPUTER --> SCISSORS\n");

    return q;
}

int choose()
{
    char c;
    int fact;
    do
    {
        fact=0;
        printf("FOR ROCK --> R or r or 0 \nFOR PAPER --> P or p or 1 \nFOR SCISSORS --> S or s or 2 : ");
        scanf(" %c", &c);
        printf("\n");

        if (c == 'R' || c == 'r' || c == '0'){
            printf("USER --> ROCK\n");
            return 0;
        }
        else if (c == 'P' || c == 'p' || c == '1'){
            printf("USER --> PAPER\n");
            return 1;
        }
        else if (c == 'S' || c == 's' || c == '2'){
            printf("USER --> SCISSORS\n");
            return 2;
        }
        else{
            printf("ENTER VALID INPUT\n\n");
            fact=1;
        }
    }
    while(fact==1);
}

int main(int argc, char const *argv[])
{
    char name[100];
    printf("ENTER YOUR NAME : ");
    gets(name);
    printf("\nHello %s WELCOME TO THE GAME!\n\n", name);

    int i, j, p, q, user, computer,r;

    do
    {  
        computer = 0,user = 0,i=0;
        while(i<3)
        {
            p = choose();
            q = generaterandomnumber(2);

            if (p == q){
                printf("-----TIE-----\n\n");
                continue;
            }

            else if (p - q == 1 || p - q == -1){
                if (p > q){
                    printf("-----USER WIN-----\n\n");
                    user++,i++;
                }
                else{
                    printf("-----COMPUTER WIN-----\n\n");
                    computer++,i++;
                }
            }
            else if (p - q == 2 || p - q == -2){
                if (p > q){
                    printf("-----COMPUTER WIN-----\n\n");
                    computer++,i++;
                }
                else{
                    printf("-----USER WIN-----\n\n");
                    user++,i++;
                }
            }
        }

        winner(user, computer);

        r = restart();
    }
    while(r==1);
    return 0;
}
