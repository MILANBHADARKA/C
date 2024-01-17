/*#include<stdio.h>
int main(int argc, char const argv[])
{
    int i,j,n,a;

    printf("enter the value of n : ");
    scanf("%d",&n);
   
   for(i=1;i<=n;i++)
   {
        if(i%2!=0)
        {
            a=1;
        }
        else
        {
            a=0;
        }
        for(j=1;j<=i;j++)
        {
           printf("%d ",a); 

           if(a==0)
           {
            a++;
           }
           else
           {
            a--;
           }
        }

        printf("\n");
   }
    return 0;
}*/

#include<stdio.h>
int main(int argc, char const argv[])
{
    int i,j,n;

    printf("enter the value of n : ");
    scanf("%d",&n);
   
   for(i=1;i<=n;i++)
   {
        for(j=1;j<=i;j++)
        {
            if(i==j || (i+j)%2==0)
            printf("%d ",1);
            else
            printf("%d ",0);
        }

        printf("\n");
   }
    return 0;
}



