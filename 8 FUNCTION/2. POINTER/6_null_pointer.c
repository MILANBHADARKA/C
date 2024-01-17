#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=35;
    int *ptr=NULL;

    printf("%u\n",ptr); //output is 0
    //printf("%d",*ptr);  in this case we not get any output and not get any error

    if(ptr!=NULL)
    {
        printf("%d",*ptr);
    }
    else
    {
        printf("null pointer cannot be dereeferenced\n");
    }

    ptr=&a;

    if(ptr!=NULL)
    {
        printf("%d",*ptr);
    }
    else
    {
        printf("null pointer cannot be dereeferenced\n");
    }
    return 0;
}
