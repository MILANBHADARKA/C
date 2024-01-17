//access the structure variable using pointer.

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

    student *x = &s1;

    x->marks=99;   //or//  (*x).marks=99;

    printf("id=%d\n",s1.id);
    printf("name=%s\n",s1.name);
    printf("marks=%d\n",s1.marks);

    return 0;
}
