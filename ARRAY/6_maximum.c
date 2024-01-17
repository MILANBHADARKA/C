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

    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("max=%d",max);

   

    return 0;
}
