#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);

    int a[n];
    int i,j;

    printf("enter the element of array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int flag=0;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            flag=1;
        }
    }

    if(flag==0)
    printf("array is palidrome");
    else
    printf("array is not palidrome");
    return 0;
}
