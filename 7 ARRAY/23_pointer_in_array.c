//see full code and its output for understanding

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    // arr[i]==*(arr+i);

    printf("%d\n", &arr[0]);
    printf("%d\n", &arr[1]);
    printf("%d\n", &arr[2]);
    printf("%d\n", &arr[3]);
    printf("%d\n", &arr[4]);
    printf("%d\n\n", &arr[5]);

    printf("%d\n", arr);    // this will print address of arr[0]
    printf("%d\n\n", *arr); // this will print value of arr[0]

    printf("%d\n", &arr[1]);
    printf("%d\n", arr + 1);
    printf("%d\n", *(arr + 1));
    printf("%d\n\n", arr[1]);

    // now if we do arr++ than it is an error because arr is constant
    // for doing this we need to declare pointer variable

    int *arrptr = arr; //    int *arrptr=arr == int *arrptr=&arr[0];

    printf("%d\n", *arrptr);  // this will print value 0f arr[0]
    printf("%d\n\n", arrptr); // this will print address of arr[0]

    arrptr++;

    printf("%d\n", *arrptr);  // this will print value of arr[1] because we do arrptr++ so now arrptr points to arr[1]
    printf("%d\n\n", arrptr); // this will print address of arr[1]

    arrptr += 4;

    printf("%d\n", *arrptr); // this will print value of arr[5] because first we do arrptr++ then we do arrptr=arrptr+4 so now arrptr points to arr[5].
    printf("%d\n\n", arrptr);

    return 0;
}
