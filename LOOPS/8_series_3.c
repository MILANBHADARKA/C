#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;

    printf("enter the value of n : ");
    scanf("%d",&n);

    int a=100;

    for(i=1;i<=n;i++)
    {   if(a>=0)
        {
            printf("%d ",a);
            a-=3;
        }
        else
        {
            break;
        }
    }
    return 0;
}

