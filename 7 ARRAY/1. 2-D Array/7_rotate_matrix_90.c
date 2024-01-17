#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int m;
    printf("eneter the value of m: ");
    scanf("%d", &m);

    int a[m][m];
    int i, j;

    printf("enter the element of matrix : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n---------------------------------------------------------------------------------------------------\n\n");
    printf("the element of array is : \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    int temp;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j <= i; j++) // if we dont do j<=i then transpose not find and in output we got matrix a not transpose.
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

   
    int k;
    i=0;
    
    while(i<m)
    {   k=m-1;
        j=0;
        while(j<k)
        {
            temp=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=temp;
            j++;
            k--;
        }
        i++;
    }

     printf("\nafter rotating 90 \n\n");
     printf("\n\n-----------------------------------------------------------------------------------------------------------\n\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}