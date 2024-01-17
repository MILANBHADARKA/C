#include <stdio.h>
#include <string.h>

typedef struct student
{
    int id;
    char name[50];
    int marks;
} student;

int fun(student a) // we can give any variable instad of 'a'.
{
    printf("id=%d\n", a.id);
    printf("name=%s\n", a.name);
    printf("marks=%d\n", a.marks);

    return 0;
}
int main(int argc, char const *argv[])
{
    student s1;

    s1.id = 1;
    strcpy(s1.name, "abc");
    s1.marks = 98;

    // printf("id=%d\n",s1.id);
    // printf("name=%s\n",s1.name);
    // printf("marks=%d\n",s1.marks);

    fun(s1); // we must give variable in function argument so we gave s1.

    return 0;
}
