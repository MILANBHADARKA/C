#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[1000];
    int i,n;
    int max,min;

    printf("enter how many element are in array [maximum(1000)]?:");
    scanf("%d",&n);
    printf("enter element of array\n");

    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);   
    }
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }

    max=a[0];
    min=a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }

    printf("max=%d\nmin=%d\n",max,min);

    


    
    return 0;
}
