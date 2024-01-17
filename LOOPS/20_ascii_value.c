#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=65;
    while(n<91)
    {
        printf("%c=%d\n",n,n);
        n++;
    }
    for(int w=1;w<40;w++)
    {
        printf("-");
    }
    printf("\n");

    int i=97;
    while(i<123)
    {
        printf("%c=%d\n",i,i);
        i++;
    }
    return 0;
}
