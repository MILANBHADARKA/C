// find unique number in array means find number that not repeted in array.

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

    int fact=0;
    for(i=0;i<n;i++)
    {   
        int flag=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("unique element is %d\n",a[i]);
            fact=1;
            
        }
    }
    
    if(fact==0)
    {
        printf("not any unique");
    }
    return 0;
}