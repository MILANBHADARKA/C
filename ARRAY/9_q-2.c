//given an array of integers,change the value of all odd indexed element by multiply by 2 and all even indexed element to summetion with 10;


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the element of array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            a[i]+=10;
        }
        else
        {
            a[i]*=2;
        }
    }
    printf("\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
