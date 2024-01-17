#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;

    printf("enter the value of a : ");
    scanf("%d",&a);

    if(a<0)
    {
        b=a*(-1);
    }
    else
    {
        b=a;
    }
    //printf("the absolute value of a is %d",b);

    printf("|%d|=%d",a,b);
    return 0;
}
