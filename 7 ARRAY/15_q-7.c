//copy one array to anothor array in reverse order.

#include <stdio.h>

void copy(int a[], int b[], int n)
{
    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        b[j] = a[i];
    }
}
int main(int argc, char const *argv[])
{
    int n;
    printf("enter the size of array : ");
    scanf("%d", &n);

    int a[n];
    int b[n];
    int i, j;

    printf("enter the element of array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    copy(a, b, n);

    printf("\n\n");
    printf("a={");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("}");

    printf("\n\n");
    printf("b={");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", b[i]);
    }
    printf("}");
    return 0;
}
