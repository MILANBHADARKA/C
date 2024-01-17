#include <stdio.h>
#include <string.h>

typedef struct student
{
    int id;
    char name[50];
    int marks;
} student;

void change(student s1)
{
    s1.marks=99;
    return;
} 
int main(int argc, char const *argv[])
{
    student s1;

    s1.id = 1;
    strcpy(s1.name, "abc");
    s1.marks = 98;

    change(s1);

    printf("id=%d\n",s1.id);
    printf("name=%s\n",s1.name);
    printf("marks=%d\n",s1.marks);

    
    //according to output clear that we can pass structure to function by PASS BY VALUE.   NOT PASS BY REFERENCE.  beacuse its not change value of marks.
    return 0;
}
