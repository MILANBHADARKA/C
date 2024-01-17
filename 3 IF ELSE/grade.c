#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks;

    printf("enter the marks : ");
    scanf("%d",&marks);

    if(marks>100)
    {
        printf("you entered wrong marks");
    }
    else if(marks>90)
    {
        printf("grade a");
    }
    else if(marks>80)
    {
        printf("grade b");
    }
    else if(marks>70)
    {
        printf("grade c");
    }
    else if(marks>60)
    {
        printf("graded d");
    }
    else if(marks>50)
    {
        printf("grade e");
    }
    else if(marks>40)
    {
        printf("grade f");
    }
    else
    {
        printf("grade g");
    }
    return 0;
}
