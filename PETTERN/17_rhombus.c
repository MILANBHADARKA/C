//     *****
//    *****
//   *****
//  *****
// *****
//n=5





#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,n;

    printf("enter the value of n ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
