#include<stdio.h>
int fibonacci(int n)
{
    if(n==1 || n==2)
    return 1;

    return fibonacci(n-1)+fibonacci(n-2);   //because nth term = (n-1)th term + (n-2)th term
}
int main(int argc, char const *argv[])
{
    int a,b,n;

    printf("enter the value of n : ");
    scanf("%d",&n);

    printf("%dth term of fibonacci series is %d",n,fibonacci(n));
    return 0;
}
