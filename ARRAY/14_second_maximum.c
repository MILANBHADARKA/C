#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[])
{
    int i, j, k, n, flag = 0;

    printf("enter the size of array : ");
    scanf("%d", &n);

    int a[n];

    printf("enter the element of array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /*we must declare max and min after scanf all element of array because we provide value a[0] to max if we provide a[0] before scan of element
    then max get garbage value.*/

    int max = a[0];
    int smax = INT_MIN; // for n=5 and element like 5 5 5 3 2 if we got secondmax =arr[0] then in this array we got wrong answer so.

    for (i = 0; i < n; i++)   // to check all element of array is same or not.
    {
        if (a[0] != a[i])
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        goto one;
    }
    else
    {
        goto two;  //to end program.
    }

one:

    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > smax && a[i] != max)
        {
            smax = a[i];
        }
    }
    printf("second max=%d", smax);

    goto three;

two:
    printf("all element of array is same so we not find second maximum\n");

three:
    return 0;
}



