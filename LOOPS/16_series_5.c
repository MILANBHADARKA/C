// 1-2+3-4+5-6+7-8.....upto n


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int i,sum=0;
    printf("enter the number : ");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum-i;
            
        }
        else
        {
            sum=sum+i;
               
        }
    }
    printf("%d",sum);
    return 0;
}
    