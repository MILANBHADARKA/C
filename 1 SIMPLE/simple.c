#include<stdio.h>
int main(int argc, char const *argv[])
{
    // int a=2;

    // printf("%d\n",a);
    // printf("%d\n",&a);
    // printf("%p\n",&a);
    // printf("%u\n",&a);
    // return 0;

    char *str[3]={"abc","def","ghi"};

    for(int i=0;i<3;i++)
    {
        puts(str[i]);
        //printf("%s\n",str[i]);
    }
    printf("\n");


    str[1]="new";

    for(int i=0;i<3;i++)
    {
        puts(str[i]);
        //printf("%s\n",str[i]);
    }

    char arr[][5]={"jkl","mno","pqr"};

    puts(arr[1]);




}
