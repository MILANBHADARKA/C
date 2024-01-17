#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char name[5][30];
    char temp[30];

    int i,j;
    printf("enter any five name :\n");

    for(i=0;i<5;i++)
    {
        gets(name[i]);
    }
    puts("\n");

    for(i=0;i<5;i++)
    {
        puts(name[i]);
    }
    puts("\n");

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }

    for(i=0;i<5;i++)
    {
        puts(name[i]);
    }
    puts("\n");

    return 0;
}
