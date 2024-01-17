#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{

    /*SYNTAX
        char city[items][maxchar];

        for access ith name
        city[i-1];
    */

    /*char state[5][100];
    state={"gujarat","maharastra","punjab","tamilnadu","madhaypardesh"};
    ths is invalid. */

    char state[][100]={"gujarat","maharastra","punjab","tamilnadu","madhaypardesh"};

    puts(state[2]);
    puts("\n");

    // state[2]="kerela"; this is in valid

    strcpy(state[2],"kerela");
    puts(state[2]);
    puts("\n");


    return 0;
}
