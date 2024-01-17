#include<stdio.h>

void fun(int a)
{
    a=6;

}
int main(int argc, char const *argv[])
{
    int a=5;

    printf("before calling fun a=%d\n\n",a);

    fun(a);

    printf("after calling fun a=%d\n",a);

    // in output we see that if we change value of a in another function than print in main function value of a would be NOT CHANGE this iscall by value.
    //in call by value we copy value og actual argument in formal argument.
    return 0;
}
