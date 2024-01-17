#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int a[1000];
    int i,n;
    int index;

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

    printf("enter index of element to be delete:");
    scanf("%d",&index);

    for(i=index;i<n-1;i++)
    {
      
        a[i]=a[i+1];
        
    }

    for(i=0;i<n-1;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
   
    printf("\n");

    return 0;
}
