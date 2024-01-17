//     *
//    **
//   ***
//  ****
// *****
//n=5

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,n;

    printf("enter the value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)   //for lines
    {
        for(j=1;j<=n-i;j++)  //for spaces
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)   //for stars
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
