#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    struct info // now info is user defined data type
    {
        int id;
        char name[50];
        int marks;
    } student1; // declare variable student1 of info structure.

    student1.id = 1;
    strcpy(student1.name, "a"); // student1.name[50]="a";   this is wrong
    student1.marks = 99;

    printf("student1 id=%d\n", student1.id);
    printf("student1 name=%s\n", student1.name);
    printf("student1 marks=%d\n\n", student1.marks);

    struct info student2; // declare variable student2 of info structure.

    printf("enter the id : ");
    scanf("%d", &student2.id);

    printf("enter the name : ");
    scanf("%s", student2.name);

    printf("enter the marks : ");
    scanf("%d", &student2.marks);

    printf("\nstudent2 id=%d\n", student2.id);
    printf("student2 name=%s\n", student2.name);
    printf("student2 marks=%d\n", student2.marks);

    return 0;
}
