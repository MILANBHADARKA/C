#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("enter the value of a : ");
    scanf("%d",&a);
    if(a>99 && a<1000)
    {
        printf("entered number is three digit.");
    }
    else{
        printf("entered number is not three digit.");
    }
    return 0;
}
