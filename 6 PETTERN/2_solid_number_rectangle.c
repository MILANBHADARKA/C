// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5
//n=5 

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
