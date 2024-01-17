#include<stdio.h>
int print(int n)
{  
    if(n==0)
    return 0;
    
    printf("%d\n",n);
    print(n-1);
    return 0;

}
int main(int argc, char const *argv[])
{
    int n;

    printf("enter the positive value of n : ");
    scanf("%d",&n);

    print(n);
    return 0;
}


