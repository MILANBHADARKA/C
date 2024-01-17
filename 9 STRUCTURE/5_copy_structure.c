#include<stdio.h>
#include<string.h>

typedef struct bookinfo
{   
    char name[50];
    int page;
    int price;
}book; 

int main(int argc, char const *argv[])
{
    book a,b;

    strcpy(a.name,"maths");
    a.page=100;
    a.price=25;

    /*we can give one by one value to another structure like this
    strcpy(b.name,a.name);
    b.page=a.page;
    b.price=a.price;
    */

   /*or we can give antier structure to other structure like this*/

   b=a;  // this will copy all information of a in b;  // we cannot compare to antier structure like b==a; this is an error.

   printf("information of b \n");
   printf("%s\n",b.name);
   printf("%d\n",b.page);
   printf("%d\n",b.price);


    return 0;
}
