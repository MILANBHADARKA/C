#include<stdio.h>
#include<string.h>

struct stable
{
    int id;
    char name[20];
    int marks[3];
    int total;
};


int main(int argc, char const *argv[])
{
    struct stable student[10];

    int i,j,max,pos=0;
    printf("enter the student id,name,three subject marks : \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&student[i].id);
        scanf("%s",&student[i].name);   
        for(j=0;j<3;j++)
        {
            scanf("%d",&student[i].marks[j]);
        }
    }
    printf("id\tname\tmarks1\tmarks2\tmarks3\n");
    
    for(i=0;i<10;i++)
    {
        printf("%d\t",student[i].id);
        printf("%s\t",student[i].name);   
        for(j=0;j<3;j++)
        {
            printf("%d\t",student[i].marks[j]);
        }
        printf("\n");
    }

    for(i=0;i<10;i++)
    {
         student[i].total=0;
         for(j=0;j<3;j++)
         {
            student[i].total+=student[i].marks[j];
         }
    }
    max=student[0].total;

    for(i=0;i<10;i++)
    {
        if(student[i].total>max)
        {
            max=student[i].total;
            pos=i;
        }
    }
    printf("\n");
    printf("--------------------------------------------------------------------------\n");
    printf("\n");
    printf("information of max marks student : \n\n");
    printf("id\tname\tmarks1\tmarks2\tmarks3\ttotal\n");
    printf("%d\t%s\t",student[pos].id,student[pos].name);
    for(i=0;i<3;i++)
    {
        printf("%d\t",student[pos].marks[i]);
    }
    printf("%d",student[pos].total);
    printf("\n");

    return 0;
}
