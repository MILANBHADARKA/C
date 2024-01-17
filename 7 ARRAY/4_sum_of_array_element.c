#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,sum=0;
    int a[5];

    printf("enter the element of array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("sum=%d",sum);
    return 0;
}
