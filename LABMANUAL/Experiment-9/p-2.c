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
    struct item product[5];
    int i,j,n,flag=0;

    printf("enter the id no.,name,price of product \n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&product[i].id);
        scanf("%s",&product[i].name);
        scanf("%d",&product[i].price);
    }
    printf("\n");
    printf("id\tname\tprice\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",product[i].id);
        printf("%s\t",product[i].name);
        printf("%d\n",product[i].price);
    }
    printf("\n");
    printf("enter the item id to be search : ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<5;i++)
    {
        if(product[i].id==n)
        {
            flag=1;
            printf("information of item of id number %d is \n",n);
            printf("\n----------------------------------------------------------\n\n");
            printf("id\tname\tprice\n");
            printf("%d\t%s\t%d",product[i].id,product[i].name,product[i].price);
            printf("\n\n-------------------------------------------------------------\n");
            break;
        }
    }
    if(flag==0)
    {
        printf("item of id number %d is not found",n);
    }
    
    return 0;
}
