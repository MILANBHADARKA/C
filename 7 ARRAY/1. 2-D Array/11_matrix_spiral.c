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


    return 0;
}
