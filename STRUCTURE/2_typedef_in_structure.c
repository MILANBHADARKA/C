// #include<stdio.h>

// typedef float realnumber;  //in simple words we can say that by using typedef we can rename DATATYPE.

// int main(int argc, char const *argv[])
// {
//     realnumber a=1.5;

//     printf("%f",a);

//     return 0;
// }

#include<stdio.h>
#include<string.h>

typedef struct bookinfo
{
    int page;
    int price;
}book;                     //now this book word is not variable of bookinfo but this is second name of bookinfo.

int main(int argc, char const *argv[])
{
    book maths;      //now this is declaring variable of book info now not need to write struct bookinfo maths; because of using typedef.
    book physics;
    struct bookinfo chemistry;    // this is also not wrong.

    maths.page=500;
    maths.price=99;

    printf("%d\n",maths.page);
    printf("%d\n",maths.price);

    return 0;
}
