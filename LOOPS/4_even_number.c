#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("enter the value of n : ");
    scanf("%d",&n);

    int a=2;

    for(i=1;i<=n;i++)
    {
        printf("%d\n",a);
        a+=2;
    }
    return 0;
}
