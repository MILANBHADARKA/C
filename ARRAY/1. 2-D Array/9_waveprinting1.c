#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m,n;
    printf("enter the row and coloum line by line : \n");
    scanf("%d%d",&m,&n);
    int i,j;
    int a[m][n];

    printf("enter the element of array : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("wave is : \n");

    for(i=0;i<m;i++)
    {   
        if(i%2==0)
        {
            for(j=0;j<n;j++)
            {       
                printf("%d\t",a[i][j]);
            }
        }

        else
        {
            for(j=n-1;j>=0;j--)
            {       
                printf("%d\t",a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
