// *********
// **** ****
// ***   ***
// **     **
// *       *
//n=5

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,n;
    printf("enter the value of n : ");
    scanf("%d",&n);

    int nsp=1;
    int nst=n-1;
    for(i=1;i<=2*n-1;i++)
    {
        printf("*");
    }
    printf("\n");
    for(i=1;i<=n-1;i++)
    {   
         for(k=1;k<=nst;k++)
        {
            printf("*");
        }
        for(j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(k=1;k<=nst;k++)
        {
            printf("*");
        }
        printf("\n");
        nsp+=2;
        nst--;
    }

    return 0;
}
