#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter the size of array : ");
    scanf("%d", &n);

    int a[n];
    int i, j;
    printf("enter the element of array : \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter element to be search : ");
    int x;
    scanf("%d", &x);

    int fact = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("index : %d\n", i);
            fact++;
        }
    }
    if (fact == 0)
    {
        printf("element is not found in this array");
    }
    return 0;
}