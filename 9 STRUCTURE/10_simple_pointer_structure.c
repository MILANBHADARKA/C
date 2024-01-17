#include <stdio.h>
#include <string.h>

typedef struct student
{
    int id;
    char name[50];
    int marks;
} student;

int main(int argc, char const *argv[])
{
    student s1;

    s1.id = 1;
    strcpy(s1.name, "abc");
    s1.marks = 98;

    student *x;
    x=&s1;

    printf("%p\n",&s1.id);
    printf("%p\n",&s1.name);
    printf("%p\n\n",&s1.marks);


    printf("%p\n\n",x);                  //in output we obverse that address of s1.id and address of x is same.
    
    // now for accecing the address of structure member threw pointer we can use -> or . oprator like shown in below
    printf("%p\n\n",x->name); 
    printf("%p\n\n",&(*x).marks);          // for dot operator use of (*x) is compalsary.

    return 0;
}
