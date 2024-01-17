// note that if we pass normal variable to function and change value of this variable in function and print value of this varible in main function value would be print NOT same as value in function.
// because in normal variable we pass variale by PASS BY VALUE.
// but in array if we change value in function then also change in value of main fuction array like shown as below.
// because in array we pass array by PASS BY REFERENCE.
// when we pass an array as an argument to a function then ADDRESS OF THE FIRST ELEMENT OF ARRAY GETS PASSED.

#include <stdio.h>
int fun1(int x[])
{
    x[0] = 10;
}

int fun2(int y[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value at %d,%d is %d\n", i, j, y[i][j]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[5] = {2, 5, 1, 4, 6};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    printf("\n");
    fun1(arr);
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    printf("\n");
    int arr2[][2] = {{1, 2}, {3, 4}};
    fun2(arr2);

    return 0;
}
