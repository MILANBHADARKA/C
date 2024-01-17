#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{

    int n;

    printf("enter the size of array : ");
    scanf("%d",&n);

    int arr[n];
    int i,temp;
    printf("enter the element of aray \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nbefore sorting\n\narr={   ");
    for(int i=0;i<n;i++)
    {
        printf("%d   ",arr[i]);
    }
    printf("}\n\nafter sorting");

    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    printf("\narr={   ");
    for(int i=0;i<n;i++)
    {
        printf("%d   ",arr[i]);
    }
    printf("}\n");




    return 0;
}
