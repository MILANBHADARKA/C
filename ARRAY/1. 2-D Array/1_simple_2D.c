/*data_type array_name[r][c];
first r =row and c=coloum
enter row at delcaration time is mandatory but enter coloum at declaration time is complsary*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[2][2];
    a[0][0]=1;
    a[0][1]=2;
    a[1][0]=3;
    a[1][1]=4;

    printf("%d\t",a[0][0]);
    printf("%d\t",a[0][1]);
    printf("%d\t",a[1][0]);
    printf("%d\t",a[1][1]);
    printf("\n");
    int b[2][2];
    int i,j;
    printf("enter the element of 2-d array");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int r,c;
    printf("enter the row of 2-D array : ");
    scanf("%d",&r);
    printf("enter the coloum of 2-D array : ");
    scanf("%d",&c);

    int x[r][c];
    printf("enter the element of array \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
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
