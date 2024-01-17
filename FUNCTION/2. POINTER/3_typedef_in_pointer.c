// #include<stdio.h>

// typedef float realnumber;  //in simple words we can say that by using typedef we can rename DATATYPE.

// int main(int argc, char const *argv[])
// {
//     realnumber a=1.5;

//     printf("%f",a);

//     return 0;
// }


#include<stdio.h>

typedef int* int_pointer;

int main(int argc, char const *argv[])
{
    int a=5;
    int_pointer x=&a;   //this is equal to int* x=&a;

    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%d\n",*x);
    printf("%p\n",x);
    return 0;
}
