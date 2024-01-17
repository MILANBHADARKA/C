//     1
//    121
//   12321
//  1234321
// 123454321





#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,r,n;
    
    printf("enter the value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {  
            printf(" ");
        }

        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
                                                                // k=k-2;
                                                                // for(r=k;r>=1;r--)
                                                                // {
                                                                //     printf("%d",r);
                                                                // }
        for(r=i-1;r>=1;r--)
        {
            printf("%d",r);
        }

        
        
        
        printf("\n");
    }
    return 0;
}
