// *       *       *       *    *


// *                            *


// *                            *


// *                            *


// *       *       *       *    *
//n=5



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

/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,p,q,r,n;
    printf("enter the odd value of n : ");
    scanf("%d",&n);

   
    for(i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            for(j=1;j<=n;j++)
            {
                printf("*\t");
            }
        }
        else
        {
            printf("*\t");

            for(p=1;p<=n-2;p++)
            {
                printf("\t");
            }

            printf("*\t");
       } 
        printf("\n\n");  
    }
       
    
    
    return 0;
}*/