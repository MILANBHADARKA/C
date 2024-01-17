#include<stdio.h>
void fun();                                     // function prototype
int main(int argc, char const *argv[])
{
    fun();
    return 0;
}
void fun()
{
    printf("hello");
}
