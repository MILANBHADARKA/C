// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a = 5;

//     printf("%p",&a);     // use of %p is for print address
//     return 0;
// }


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=5;
    int* x=&a;                      //int* --->its store address of int means its store address of variable

    printf("%p\n",&a);
    printf("%p\n",x);               // print address of variable by pointer


    printf("\n");


    printf("%d\n",*x);            // print value of variable by pointer
    printf("%d\n",a);


    printf("\n");


    //--->IMP
    *x=7;                              // change value of variable by pointer

    printf("%d\n",*x);
    printf("%d\n",a);


    printf("\n");


    //--->IMP

    int** y=&x;                  //int** --->its store address of int* means its store address of pointer
                                 // then int*** ---->its store address of double pointer 

    printf("%p\n",&x);
    printf("%p\n",y);  


    printf("\n");


    return 0;
}
