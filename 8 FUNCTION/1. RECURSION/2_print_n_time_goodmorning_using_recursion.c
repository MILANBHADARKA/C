#include<stdio.h>
void print(int n);
int main(int argc, char const *argv[])
{
    int n;

    printf("enter the value of n : ");
    scanf("%d",&n);
    print(n);
    return 0;
}
void print(int n)
{
    if(n==0)
    return;

    printf("GOODMORNING\n");
    print(n-1);
    return;
}