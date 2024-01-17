#include<stdio.h>
#include<string.h>
struct item
{
    int id;
    char name[20];
    int price;
};

int main(int argc, char const *argv[])
{
    struct item product[3],temp;
    int i,j,n,flag=0;

    printf("enter the id no.,name,price of product \n");

    for(i=0;i<3;i++)
    {
        scanf("%d",&product[i].id);
        scanf("%s",&product[i].name);
        scanf("%d",&product[i].price);
    }
    printf("\n");
    printf("id\tname\tprice\n");
    for(i=0;i<3;i++)
    {
        printf("%d\t",product[i].id);
        printf("%s\t",product[i].name);
        printf("%d\n",product[i].price);
    }

    

    for(i=0;i<2;i++)
    {
        if(strcmp(product[i].name,product[i+1].name)>0)
        {
            temp=product[i];
            product[i]=product[i+1];
            product[i+1]=temp;
        }
    }
    printf("\n");
    printf("after sorting\n");
    printf("\n");
    printf("------------------------------------------------------------\n\n");
    printf("name\tid\tprice\n");
    for(i=0;i<3;i++)
    {
        printf("%s\t",product[i].name);
        printf("%d\t",product[i].id);
        printf("%d\n",product[i].price);
    }
    printf("\n\n-------------------------------------------------------\n");
    return 0;
}