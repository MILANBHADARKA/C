// *****
//  ****
//   ***
//    **
//     *
//n=5

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,n;

    printf("enter the value of n : ");
    scanf("%d",&n);

    int nsp=0;
    int nst=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(k=1;k<=nst;k++)
        {
            printf("*");
        }
        printf("\n");
        nsp++;
        nst--;
    }
    return 0;
}