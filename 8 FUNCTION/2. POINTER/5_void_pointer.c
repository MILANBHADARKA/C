#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=2;
    float b=5.6;
    char c='a';

    void *ptr;

    ptr=&a;
    printf("value of a is %d\n",*(int *)ptr);  //we can not directly dereference void pointer means we can not directly print value of void pointer
    //printf("value of a is %d\n",*ptr); this is an error

    ptr=&b;
    printf("value of b is %f\n",*(float *)ptr);

    ptr=&c;
    printf("value of c is %c\n",*(char *)ptr);

    /*here we see that with one pointer we can store different type variable address
    so vois pointer called GENERAL PURPOSE POINTER VARIABLE.*/
    return 0;
}
