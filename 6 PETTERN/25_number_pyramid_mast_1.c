// 123456789
// 1234 6789
// 123   789
// 12     89
// 1       9
//n=5


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,p,n;
    printf("enter the value of n : ");
    scanf("%d",&n);

    int nsp=1;
    int np=n-1;
    for(i=1;i<=2*n-1;i++)
    {
        printf("%d",i);
    }
    printf("\n");
    for(i=1;i<=n-1;i++)                   // for(i=1;i<=n-1;i++)
    {                                      // {   
        for(k=1;k<=np;k++)                 //      for(k=1;k<=np;k++)
        {                                  //     {
            printf("%d",k);                //         printf("%d",k);
        }                                  //     }
        for(j=1;j<=nsp;j++)                //     for(j=1;j<=nsp;j++)
        {                                  //     {
            printf(" ");
            k++;                           //         printf(" ");
        }                                  //     }
                                           //     int m=k+(j-1);
        for(p=1;p<=np;p++)                 //     for(k=1;k<=np;k++)
        {                                  //     {
            printf("%d",k);                //         printf("%d",m);
            k++;                           //         m++;
        }                                  //     }
        printf("\n");                      //     printf("\n");
        nsp+=2;                            //     nsp+=2;
        np--;                              //     np--;
    }                                      // }

    return 0;
}