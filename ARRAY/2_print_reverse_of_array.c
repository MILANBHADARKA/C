
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

    for(i=5;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
