// ABCDEFGHI
// ABCD FGHI
// ABC   GHI
// AB     HI
// A       I
//n=5

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,n;
    printf("enter the value of n : ");
    scanf("%d",&n);

    int nsp=1;
    int nc=n-1;
    int c=65;
    for(i=1;i<=2*n-1;i++)
    {
        printf("%c",c);
        c++;
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {   c=65;
         for(k=1;k<=nc;k++)
        {
            printf("%c",c);
            c++;
        }
        for(j=1;j<=nsp;j++)
        {
            printf(" ");
            c++;
            
        }
        
        for(k=1;k<=nc;k++)
        {
            printf("%c",c);
            c++;
        }
        printf("\n");
        nsp+=2;
        nc--;
    }

    return 0;
}