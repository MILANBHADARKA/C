#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int a,b,temp;
    printf("enter theb value of a : ");
    scanf("%d",&a);

    printf("enter theb value of b : ");
    scanf("%d",&b);

    // temp=a;;
    // a=b;
    // b=temp;

    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("a=%d b=%d",a,b);
    return 0;
}
