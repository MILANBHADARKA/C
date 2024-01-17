//find the number of triplets whose sum is equaln to thr givin number x.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j,x,k;

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
            for(k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==x)
                {   
                printf("%d+%d+%d=%d\n",a[i],a[j],a[k],x);
                count++;
                }
            }
        }
    }
    printf("pair=%d",count);
    return 0;
}
