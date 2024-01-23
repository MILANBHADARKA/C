#include<stdio.h>
int main(int argc, char const *argv[])
{
    char city[3][25]={"Baroda","Nadiad","Anand"};
    printf("%s\n",city[2]+2);
    printf("%s",**(city+2)+2);
    return 0;
}
