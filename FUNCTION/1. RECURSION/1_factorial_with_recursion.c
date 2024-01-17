#include<stdio.h>

/*if condition is true then return 1 and function is end so second return is not work.
because after one return statement function is end and second return statement is not recognayz 
so not need of else statement. if we put else statement it is not wrong.*/

int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
     return n*fact(n-1);                          
}
int main(int argc, char const *argv[])
{
    int a;

    printf("enter the value of a : ");
    scanf("%d",&a);

    int factorial = fact(a);

    printf("factorial of %d is %d",a,factorial);
    return 0;
}
