#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the element of array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }

    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("min=%d",min);

   

    return 0;
}
