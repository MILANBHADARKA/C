//givin a matrix having 0-1 only,find the row with the maximum number of 1's.

#include <stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int m, n;
    printf("enter the row of matrix : \n");
    scanf("%d", &m);
    printf("enter the coloum of matrix : \n");
    scanf("%d", &n);

    int a[m][n];
    int i, j;
    printf("enetre the element of metrix enter 0 and 1 only : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0 && a[i][j]!=1)
            {
                printf("enter '0' & '1' only");
                exit(0);
            }
        }
    }
    int count[m];
    for (i = 0; i < m; i++)
    {
        count[i] = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                count[i] += 1;
            }
        }
    }

    int max = count[0];
    int position=0;

    for (i = 0; i < m; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            position = i;
        }
    }

    printf("row with maximum number os 1's is %d and number of 1 is %d\n", (position + 1), max);
    return 0;
}
