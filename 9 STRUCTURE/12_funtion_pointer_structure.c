// change value of member of structure by function.
// using pointer

#include <stdio.h>
#include <string.h>

typedef struct student
{
    int id;
    char name[50];
    int marks;
} student;

void change(student *s1)
{
    s1->marks = 99;
    strcpy(s1->name, "def");
    return;
}
int main(int argc, char const *argv[])
{
    student s1;

    s1.id = 1;
    strcpy(s1.name, "abc");
    s1.marks = 87;

    printf("before change\n");
    printf("id=%d\n", s1.id);
    printf("name=%s\n", s1.name);
    printf("marks=%d\n\n", s1.marks);

    student *x; // declare structure pointer variable x
    x = &s1;    // give address of s1 to structure pointer variable x.

    change(x); // or// change(&s1);

    printf("after change\n");
    printf("id=%d\n", s1.id);
    printf("name=%s\n", s1.name);
    printf("marks=%d\n", s1.marks);
    
    return 0;
}
