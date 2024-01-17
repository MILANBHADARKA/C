#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("enter the value of a : ");
    scanf("%d",&a);


    if(a%2==0)
    {
        printf("value of a is even");
    }
    else
    {
        printf("the value of a is odd");
    }
    return 0;
}
