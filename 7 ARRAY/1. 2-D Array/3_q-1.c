//write a program to print the row number having the maximum sum in a given matrix.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int m, n;
    printf("enter the raw ");
    scanf("%d", &m);
    printf("enter the coloum ");
    scanf("%d", &n);

    int a[m][n];
    int i, j;
    int sum[m]; // for store sum of row element
    printf("enter the element of 2D array : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("the element of 2D array is : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    int flag = 0;
    for (i = 0; i < n; i++) // to check all element of array is same or not.
    {
       for(j=0;j<n;j++)
       {
            if(a[0][0]!=a[i][j])
            {
                flag=1;
            }
       }
    }

    if (flag == 1)
    {
        goto one;
    }
    else
    {
        goto two; // to end program.
    }
one:
    

    for (i = 0; i < m; i++)
    {
        sum[i] = 0;
        for (j = 0; j < n; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
    }
    int max = sum[0];
    int position;
    for (i = 0; i < m; i++)
    {
        if (sum[i] > max)
        {
            max = sum[i];
            position = i;
        }
    }

    printf("row number having maximum sum is %d and sum is %d\n", (position + 1), max); // we do position+1 because we wnt to print row number
                                                                                        // and position is it's index number if we want to print
                                                                                        // index then write position if we want to print row number then position+1
    goto three;

        two : printf("all element is same \n");

three:
    return 0;
}
