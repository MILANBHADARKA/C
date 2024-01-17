#include<stdio.h>

int swap1(int a,int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("a=%d b=%d",a,b);

    return 0;
}

int swap2(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);

    return 0;
}                                                                       // in swap number passn by value we can not printf swaped value in main function

int main(int argc, char const *argv[])
{   
    int a,b,temp;
    printf("enter theb value of a : ");
    scanf("%d",&a);

    printf("enter theb value of b : ");
    scanf("%d",&b);
    
    //swap1(a,b);              // with temp

    swap2(a,b);               // without temp

                                                                   
    return 0;
}