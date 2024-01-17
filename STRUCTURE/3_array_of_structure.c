#include<stdio.h>
#include<string.h>

typedef struct bookinfo
{
    char name[50];
    int tpage;
    int price;
}bookinfo;

int main(int argc, char const *argv[])
{
    bookinfo book[3];  //it maks an array of 3 structure variable.  //if we not use typedef then write struct bookinfo book[30];
    int i;
    printf("enter the name,tpage and price line by line :\n");

    for(i=0;i<3;i++)
    {
        scanf("%s",&book[i].name);
        scanf("%d",&book[i].tpage);
        scanf("%d",&book[i].price);
    }
    printf("\n");
      for(i=0;i<3;i++)
    {
        printf("book%d name = ",i+1);
        puts(book[i].name);
        printf("book%d tpage = %d\n",i+1,book[i].tpage);
        printf("book%d price = %d\n\n",i+1,book[i].price);
    }


    return 0;
}
