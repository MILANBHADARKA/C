#include<stdio.h>
#include<string.h>

struct item
{
    char name[20];
    int price;
    int quantity;
}it1;


struct item update(struct item it1)
{
    int i,j;
    upadation:
    printf("enter the upadation of price and quantity : ");
    scanf("%d%d",&i,&j);
    if(i<=-it1.price || j<=-it1.quantity)
    {
        printf("enter the true value of upadation \n");
        goto upadation;
    }
    it1.price = it1.price + i;
    it1.quantity = it1.quantity + j;

    return it1;

}


int main(int argc, char const *argv[])
{
    

    printf("enter the name,price and quantity of product : \n");
    scanf("%s %d %d",&it1.name,&it1.price,&it1.quantity);

    printf("OLD DETAIL OF PRODUCT\n");
    printf("---------------------------------------------------\n\n");
    printf("name\tprice\tquantity\n");
    printf("%s\t%d\t%d\n\n",it1.name,it1.price,it1.quantity);
    printf("---------------------------------------------------\n\n");


    it1=update(it1);

    printf("NEW DETAIL OF PRODUCT\n");
    printf("---------------------------------------------------\n\n");
    printf("name\tprice\tquantity\n");
    printf("%s\t%d\t%d\n\n",it1.name,it1.price,it1.quantity);
    printf("---------------------------------------------------\n\n");

    
    return 0;
}
