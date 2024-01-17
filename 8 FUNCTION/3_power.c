#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,power;

    printf("enter the value of a : ");
    scanf("%d",&a);
    printf("enter the value of b : ");
    scanf("%d",&b);
    power = pow(a,b)+1;
    printf("%d^%d=%d",a,b,power);
    
 
    return 0;
}
