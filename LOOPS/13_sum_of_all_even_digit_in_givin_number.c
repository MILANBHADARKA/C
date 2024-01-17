#include<stdio.h>
int main(int argc, char const *argv[])
{
    long int n;
    int sum=0;
    int d;
    printf("enter the number : ");
    scanf("%d",&n);

    while(n>0)
    {
        d=n%10;
        if(d%2==0)
        {
            sum=sum+d;
        }    
        n=n/10;
        

    }
    printf("sum of digit of givin number is %d\n",sum);
    return 0;
}
