#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    abc:
    printf("enter the value of a : ");
    scanf("%d",&a);

    printf("enter the value of b : ");
    scanf("%d",&b);

   

    int power=1;
    int i;

    for(i=1;i<=b;i++)
    {
        power=power*a;
    }

    printf("a^b is %d",power);

    
    
    return 0;
}
