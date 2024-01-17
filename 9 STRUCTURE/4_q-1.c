//information of cricketer

#include<stdio.h>
#include<string.h>

typedef struct cricketerinfo
{
    char name[60];
    int age;
    int numberofmatches;
    float average;
}cricketerinfo;

int main(int argc, char const *argv[])
{
    cricketerinfo player[3];

    int i;
    printf("enter line by line name,age,number of matches and average \n");

    for(i=0;i<3;i++)
    {
        scanf("%s",player[i].name);
        scanf("%d",&player[i].age);
        scanf("%d",&player[i].numberofmatches);
        scanf("%f",&player[i].average);

    }

    for(i=0;i<3;i++)
    {
        printf("%s\n",player[i].name);
        printf("%d\n",player[i].age);
        printf("%d\n",player[i].numberofmatches);
        printf("%f\n\n",player[i].average);

    }
    return 0;
}
                   