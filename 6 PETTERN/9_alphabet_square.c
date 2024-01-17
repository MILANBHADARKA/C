#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;

    printf("enter the value of n : ");
    scanf("%d",&n);

    

    for(i=1;i<=n;i++)
    {
        int c=65;
        for(j=1;j<=n;j++)
        {
             /*char ch=(char)c;
            printf("%c",ch);*/
            
            printf("%c ",c);

           

            c++;
        }
        printf("\n");

    }
    return 0;
}