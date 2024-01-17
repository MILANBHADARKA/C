#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    long long int fact=1;
    printf("enter the number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        // printf("the factorial of %d is : %d\n",i,fact);                 //for the factorial of first 'n' number
    }

    printf("factorial of givin number is %d",fact);                   //for factorial of given number
    return 0;
}
