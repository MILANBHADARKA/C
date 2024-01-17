#include<stdio.h>
int main(int argc, char const *argv[])
{
    int r,c;
    printf("enter the rows : ");         
    scanf("%d",&r);
    printf("enter the coloum : ");
    scanf("%d",&c);

    int a[r][c];
    int b[r][c];
    int x[r][c];

    printf("enter the element of first matix : \n");
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter the element of second matix : \n");
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n\nfirst matix is : \n");
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n second matix is: \n");
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            x[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("\n\n addition: \n");
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
