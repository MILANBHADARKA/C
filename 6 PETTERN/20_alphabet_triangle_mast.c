//     A
//    AB
//   ABC
//  ABCD
// ABCDE
//n=5

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,n;
    int c;

    printf("enter the value of n : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {   
        c=65;

        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%c",c);
            c++;
        }
        printf("\n");
    }

    return 0;
}
