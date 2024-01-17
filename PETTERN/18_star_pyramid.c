                //     *
                //    ***
                //   *****
                //  *******
                // *********

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,j,k,n;

//     printf("enter the value of n : ");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n-i;j++)
//         {
//             printf(" ");
//         }
//         for(k=1;k<=i+(i-1);k++)
//         {
//                                                                             //        1
//                                                                             //       123
//                                                                             //      12345
//                                                                             //     1234567
//                                                                             //    123456789
//                                                                             // printf("%d",k);
//             printf("*");

//         }
//         printf("\n");
//     }
//     return 0;
// }






                //     *
                //    * *
                //   * * *
                //  * * * *
                // * * * * *





#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,n;

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
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
