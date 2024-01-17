//for understand bubble sort dry run this program and see collage walah clanguage lecture 11.
//bubble sort is best in TIME COMPLEXITY with recpect to seletion sort.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enetr the size of array : ");
    scanf("%d",&n);

    int arr[n];
    int i,j,temp;
    int flag=0;

    printf("enter the element of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("arr={   ");
    for(i=0;i<n;i++)
    {
        printf("%d   ",arr[i]);
    }
    printf("}\n\n");

    for(i=0;i<n-1;i++)
    {   
        flag=1;

        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                flag=0;
            }
        }


        if(flag==1)    //beacuse if flag==1 that means array is sort so not need to call first for loop.
        {
            break;
        }
    }

    printf("arr={   ");
    for(i=0;i<n;i++)
    {
        printf("%d   ",arr[i]);
    }
    printf("}\n\n");

    return 0;
}
