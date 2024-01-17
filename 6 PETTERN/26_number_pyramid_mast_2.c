// 123456789
// 1234 4321
// 123   321
// 12     21
// 1       1
//n=5

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,n;
    printf("enter the value of n : ");
    scanf("%d",&n);

    int nsp=1;
    int np=n-1;
    for(i=1;i<=2*n-1;i++)
    {
        printf("%d",i);
    }
    printf("\n");
    for(i=1;i<=n-1;i++)
    {   
         for(k=1;k<=np;k++)
        {
            printf("%d",k);
        }
        for(j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        
        for(k=k-1;k>=1;k--)
        {
            printf("%d",k);
            
        }
        printf("\n");
        nsp+=2;
        np--;
    }

    return 0;
}