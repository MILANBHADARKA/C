// rotate th givin array 'a'by k steps,where k is non-negative.
// like if a=1 2 3 4 5 6 7 and k=3
// then do a = 5 6 7 1 2 3 4

#include <stdio.h>
void reverse(int a[], int k, int y)
{
    int i, j, temp;
    for (i = k, j = y; i < j; i++, j--)
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

    printf("enter how many time did you want rotate the arrat : ");
    int k;
    scanf("%d", &k);

    k = k % n; // this is mandatory but if do this then procecing time is reduce.

    reverse(a, 0, n - 1);
    reverse(a, 0, k - 1);
    reverse(a, k, n - 1);

    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}