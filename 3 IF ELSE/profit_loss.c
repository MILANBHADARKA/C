#include<stdio.h>
int main(int argc, char const *argv[])
{
    int cp,sp,profit=0,loss=0;

    printf("enter cost price : ");
    scanf("%d",&cp);

    printf("enter selling price : ");
    scanf("%d",&sp);

    if(cp<sp)
    {
        printf("seller make a profit of %d",sp-cp);
    }

    else if(cp>sp)
    {
        printf("seller make a loss of %d",cp-sp);
    }
   else
    {
        printf("seller not make a profit or loss");
    }
    return 0;
}
