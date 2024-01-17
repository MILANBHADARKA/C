#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a, b, c;

    printf("enter the value of a : ");
    scanf("%d", &a);

    printf("enter the value of b : ");
    scanf("%d", &b);

    printf("enter the value of c : ");
    scanf("%d", &c);

    if(a>b)
    {
        if(a>c)
        {
            printf("value of a is greastest");
        }
        else
        {
            printf("value of c is greastest");
        }
    }
    else
    {
        if(b>c)
        {
            printf("value of b is greastest");
        }    
        else
        {
            printf("value of c is greastest");
        }
    }
    return 0;
}
