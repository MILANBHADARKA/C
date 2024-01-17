// put all 0's at the end of array

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter the size of array : ");
    scanf("%d", &n);

    int arr[n];
    int i, j, temp;
    int flag = 0;

    printf("enter the element of array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("arr={   ");
    for (i = 0; i < n; i++)
    {
        printf("%d   ", arr[i]);
    }
    printf("}\n");

    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (int j = i + 1; j < n; j++)
        {   
            flag = 0;
            if (arr[i] == 0) // if we want to put the all 0's at the star of array then change is only that in IF statement condition if if(arr[j]==0)
            {
                
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                flag = 1;
            }
            if (flag == 0) // for reducing call of second for loop.
            {
                break;
            }
        }
    }

    printf("arr={   ");
    for (i = 0; i < n; i++)
    {
        printf("%d   ", arr[i]);
    }
    printf("}\n");

    return 0;
}
