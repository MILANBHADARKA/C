#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    printf(" digit in entered number is %d",count);
    return 0;
}
