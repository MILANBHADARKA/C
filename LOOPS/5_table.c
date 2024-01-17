#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("enter the number that you want to print table : ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,i*n);
    }
    return 0;
}

