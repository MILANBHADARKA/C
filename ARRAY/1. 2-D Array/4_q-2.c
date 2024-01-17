//givin a matrix 'a' of dimension n x m and 2 coordinates(x1,y1) and (x2,y2). return the sum of the rectangle from (x1,y1) to (x2y2). 

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int m,n;
    printf("eneter the row : ");
    scanf("%d",&m);
    
    printf("eneter the coloum : ");
    scanf("%d",&n);

    int a[m][n];
    int i,j,x1,y1,x2,y2;

    printf("enter the element of matrix : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n---------------------------------------------------------------------------------------------------\n\n");
    printf("the element of array is : \n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("enter the value of x1,y1,x2,y2 line by line \n");
    scanf("%d",&x1);
    scanf("%d",&y1);
    scanf("%d",&x2);
    scanf("%d",&y2);
    if(x1<0||x1>=m||x2<0||x2>=m||y1<0||y1>=n||y2<0||y2>=n)
    {
        printf("wrong input");
        exit(0);
    }

    int sum=0;

    for(i=x1;i<=x2;i++)
    {
        for(j=y1;j<=y2;j++)
        {
            sum+=a[i][j];
        }
    }

    printf("sum of element from (%d,%d) to (%d,%d) is %d",x1,y1,x2,y2,sum);
    return 0;
}
