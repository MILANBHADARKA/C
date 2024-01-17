#include<stdio.h>

void fun(int *a)
{
    *a=6;

}
int main(int argc, char const *argv[])
{
    int a=5;

    printf("before calling fun a=%d\n\n",a);

    fun(&a);

    printf("after calling fun a=%d\n",a);

    // in output we see that if we change value of a in another function than print in main function value of a would be CHANGE this is call by referance.
    //in call by reference we copy address of actual argument in formal argument. so if we chage value in another function that means we change value at the address of actual argument.
    return 0;
}