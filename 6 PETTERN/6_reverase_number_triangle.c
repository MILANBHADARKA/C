// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
//n=5

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;
    printf("enter the value of n : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
