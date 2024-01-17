#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,a=0;
    printf("enter the number : ");
    scanf("%d",&n);

    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            a=1;
            break;
        }
    }
    if(n==1)
    {
        printf("1 is not prime and not composite");
    }
    else if(a==0) 
    {
            printf("%d is prime",n);
    }
    else
    {
        printf("%d is composite",n);
    }
    
    return 0;
}
