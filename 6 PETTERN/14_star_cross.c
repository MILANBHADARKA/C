// *    *
//  *  *
//   *
//  *  *
// *    *
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
            if(i==j || i+j==n+1)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
