#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int d;
    int reverse=0;
    printf("enter the number : ");
    scanf("%d",&n);

    
    while(n>0)
    {
            d=n%10;
            reverse=reverse*10+d;
            n=n/10;
    }
    printf("the reverse number is %d",reverse);
    return 0;
}
    