// this code is only for reduceing calls of function.
//in this code we use A^B = A^B/2 * A^B/2;

#include<stdio.h>
int powlog(int a,int b)
{   
    if(a==0)
    return 0;

    if(b==0)
    return 1;

    int x=powlog(a,b/2);

    if(b%2==0)  //b is even
    return x * x;

    else  //b is odd
    return a * x * x;
}
int main(int argc, char const *argv[])
{
    int a,b;

    printf("enter the value of a : ");
    scanf("%d",&a);

    
    printf("enter the value of b : ");
    scanf("%d",&b);

    int power = powlog(a,b);

    printf("%d^%d=%d",a,b,power);


    return 0;
}
