#include <stdio.h>
void reverse(int a[], int x, int y)
{
    int i, j, temp;
    for (i = x, j = y; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
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
    printf("frome where to where you want to reverse array enter :   ");
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    reverse(a, x, y);

    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}