#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n,r,a;
    int element;
    printf("enter the value of a : ");
    scanf("%d",&a);

    for(i=0;i<=a;i++)
    {   element=1;
         
        for(j=0;j<=i;j++)
        {   
            n=i;
            r=j;
            printf("%d\t",element);

            element = element *  (n-r) / (r+1)  ;
        }
        printf("\n\n");
    }
    return 0;
}
