//4 7 10 13...upto n

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    
    printf("enter the value of n : ");
    scanf("%d",&n);

    int a=4;

    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a+=3;
    }
    return 0;
}
