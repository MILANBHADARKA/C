// * * * * *
// * * * *
// * * *
// * *
// *
//n=5

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    int nst=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=nst;j++)
        {
            printf("* ");
        }
        nst--;
        printf("\n");
    }
    
    return 0;
}
