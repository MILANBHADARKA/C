// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
//n=5

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;
    int a=1;

    printf("enter the value of n : ");
    scanf("%d",&n);



    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");    }
    return 0;
}
