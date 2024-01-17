#include<stdio.h>
void swap(int* x,int* y);
int main(int argc, char const *argv[])
{
    int a,b;

    printf("enter the value of a : ");
    scanf("%d",&a);

    
    printf("enter the value of b : ");
    scanf("%d",&b);

    int* x=&a;
    int* y=&b;

    swap(x,y);   // or swap(&a,&b);

    printf("a=%d b=%d",a,b);                             // in swap number passn by reference we can printf swaped value in main function
    return 0;
}


void swap(int* x,int* y)
{
    int temp;

    temp=*x;
    *x=*y;
    *y=temp;
}


