#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a;

    printf("enter the int value of a : ");
    scanf("%d",&a);
    float squareroot = sqrt(a);
    float cuberoot = cbrt(a);
    printf("the square root of %d : %f\n",a,squareroot);
    printf("the cube root of %d : %f\n",a,cuberoot);
    return 0;
}
