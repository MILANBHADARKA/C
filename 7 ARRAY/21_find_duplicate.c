#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);

    int a[n];
    int b[n];
    int i,j,k;
    printf("enter the element of array : \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int flag=0,fact;
    
    for(i=0;i<n;i++)
    {   
        fact=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=0;k<n;k++)
                {
                    if(b[k]==j)  //this condition will not re print the index.
                    {
                        fact=1;
                        break;  //this will not break main for loop but this will break this for loop(means for loop of k variable)
                    }
                }
                if(fact==0)
                {
                    printf("find duplicate of %d at index %d\n",a[i],j);
                }

                b[j]=j;

                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("duplicate not found");
    }

    return 0;
}