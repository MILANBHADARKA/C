// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[5]={1,5,8,9,10};
//     printf("%d\n",arr[2]);
//     printf("%d\n",arr[1]);
//     printf("%d\n",arr[4]);
//     // printf("%d\n",arr[5]);     //garbage

//     float a[3]={1.22,5.3,6.9};
//     printf("%f\n",a[2]);
//     printf("%f\n",a[0]);

//     char c[5]={'a','1','$','k','5'};
//     printf("%c\n",c[2]);
//     printf("%c\n",c[1]);
//     printf("%c\n",c[0]);

//     return 0;
// }


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5];
    int i;
    printf("enter the element of array");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
