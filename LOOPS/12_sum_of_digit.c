#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int sum=0;
    int d;
    int count=0;
    printf("enter the number : ");
    scanf("%d",&n);

    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
        count++;

    }
    printf("sum of digit of givin number is %d\n",sum);
    printf(" digit in entered number is %d",count);
    return 0;
}
