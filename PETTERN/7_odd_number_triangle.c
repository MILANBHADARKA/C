#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        int a=1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}