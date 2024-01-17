#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,r,c;

    printf("enter the value of rows : ");
    scanf("%d",&r);

    printf("enter the value of coloums : ");
    scanf("%d",&c);

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(j==1 || i==1 || j==c || i==r)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n\n\n");
    }

    

    return 0;
}
