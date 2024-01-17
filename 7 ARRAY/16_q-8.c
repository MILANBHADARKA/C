//reverse a ayyay without using another array

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);

    int a[n];
    int i,j;
    printf("enter the element of array : \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0,j=n-1;i<j;i++,j--)
    {
        a[i]=a[i]+a[j];
        a[j]=a[i]-a[j];
        a[i]=a[i]-a[j];
    }

    printf("\n\n\n");
    
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}
