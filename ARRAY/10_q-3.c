//count the number of element in array greater than a given number  x.

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

    int x;
    printf("enter the value of x : ");
    scanf("%d",&x);
    int count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>x)
        {
            count++;
        }
    }

    printf("\nnumber of element greater then %d in array is %d",x,count);
    return 0;
}
