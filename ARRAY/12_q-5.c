//find total number of pairs in the arrays whose sum is equaln to the givin number.

#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int n,i,j,x;

    printf("enter the size of array : ");
    scanf("%d",&n);

    int a[n];

    printf("enter the element of array : ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    
    
    printf("enter the value of x ");
    scanf("%d",&x);

    int count=0;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {   
            if(a[i]+a[j]==x)
            {   
                printf("%d+%d=%d\n",a[i],a[j],x);
                count++;
            }
        }
    }
    printf("pair=%d",count);
    return 0;
}
