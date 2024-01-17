#include <stdio.h>
int main(int argc, char const *argv[])
{
    int m1,n1,m2,n2;
    abc:
    printf("enter first matrix row and coloum : \n");
    scanf("%d%d",&m1,&n1);
    printf("enter first matrix row and coloum : \n");
    scanf("%d%d",&m2,&n2);
    
    if(n1!=m2)
    {
        printf("please enter n1=m2\n");
        goto abc;
    }
    int a[m1][n1];
    int b[m2][n2];
    int c[m1][n2];

    printf("enter the element of first matix : \n");
    int i, j,k;
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter the element of second matix : \n");

    for (i = 0; i < m2; i++)
    {
        for (j = 0; j < n2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            c[i][j]=0;
            for(k=0;k<n2;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("multiplication is \n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}