#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;
    int c;
    printf("enter the value of n : ");
    scanf("%D",&n);

    for(i=1;i<=n;i++)
    {
        c=65;
        for(j=1;j<=i;j++)
        {
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
