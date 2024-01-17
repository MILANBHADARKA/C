// 1 2 4 8 16 32...upto n

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;

    printf("enter the value of n : ");
    scanf("%d",&n);

    int a=1;

    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a*=2;
    }

    return 0;
}
