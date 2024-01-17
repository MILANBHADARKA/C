#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char const *argv[])
{
    srand(time(NULL));  //we write time because time is not constant if we write any constant like 45,219, 56 e.t.c then in output we get same number every time if we want to get random number then write time(NULL).

    printf("random number between 0 to 5 is %d",rand()%5);
    return 0;
}
