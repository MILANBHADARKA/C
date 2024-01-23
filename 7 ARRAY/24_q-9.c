#include<stdio.h>
int main(int argc, char const *argv[])
{
    int  n,i,j,k,temp;
    printf("enter size of array : ");
    scanf("%d",&n);

    int arr[n];
    printf("enter element of array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                for(k=j;k<n;k++)
                {
                    // temp=arr[k];
                    // arr[k]=arr[k+1];
                    // arr[k+1]=temp;
                    arr[k]=arr[k+1];
                }
                n=n-1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
