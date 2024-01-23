#include<stdio.h>
int main(int argc, char const *argv[])
{
    char d[]="amritmahotsav";
    char *ptr=&d[4];
    char *qtr=d;
    printf("%s\t",qtr+1+ *(d+12)-ptr[-2]);
    printf("%d",sizeof(d));
    return 0;
}
