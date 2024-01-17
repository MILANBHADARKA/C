#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,product=1;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the element of array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        product*=a[i];
    }
    printf("product=%d",product);

    return 0;
}
