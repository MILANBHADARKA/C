#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,a;

    printf("enter the number a : ");
    scanf("%d",&a);

    printf("enter the value of n : ");
    scanf("%d",&n);


if (a%n==0)
{
    printf("%d is divisibal by %d\n",a,n);  
}
else
{
    printf("%d is not divisibal by %d\n",a,n);
}


    return 0;
}
