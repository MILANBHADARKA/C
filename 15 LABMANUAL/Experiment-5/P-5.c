#include<stdio.h>
int main()
{
    int a[1000];
    int i,n;
    int index,value;

    printf("enter how many element are in array [maximum(1000)]?:");
    scanf("%d",&n);
    printf("\n");
    printf("enter element of array\n");

    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);   
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    
    printf("\n");
    printf("enter index of new element:");
    scanf("%d",&index);
    printf("\n");
    printf("enter value of new element:");
    scanf("%d",&value);
    printf("\n");

    for(i=n-1;i>=index;i--)
    {
        a[i+1]=a[i];
    }

    a[index]=value;

    for(i=0;i<n+1;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);   
    }
    printf("\n");
    return 0;
}