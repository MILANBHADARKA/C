//                 *

//                 *

// *       *       *       *       *

//                 *

//                 *
//n=5

/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,p,q,r,n;
    printf("enter the odd value of n : ");
    scanf("%d",&n);

   
    for(i=1;i<=n;i++)
    {
        if(i==(n/2)+1)
        {
            for(j=1;j<=n;j++)
            {
                printf("*\t");
            }
        }
        else
        {
            for(p=1;p<=n/2;p++)
            {
                printf("\t");
            }

            printf("*");

            for(r=1;r<=n/2;r++)
            {
                printf("\t");
            }

       } 
        printf("\n\n");  
    }
       
    
    
    return 0;
}*/



#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;

    printf("enter the odd value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==(n/2)+1 || i==(n/2)+1)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n\n");
    }
    return 0;
}

