#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;

    printf("enter the value of a : ");
    scanf("%d",&a);

    a%2==0 ? printf("even number") : printf("odd number");
    return 0;
}
