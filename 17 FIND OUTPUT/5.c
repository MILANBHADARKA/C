#include<stdio.h>
int f1(int n,int sum);
int main(int argc, char const *argv[])
{
    int a=2048,sum=0;
    f1(a,sum);
    printf("%d",sum);
    return 0;
}

int f1(int n,int sum)
{
    int k=0,j=0;
    if(n==0)
    {
        printf("%d\t",sum);
        return 0;
    }
    k=n%10;
    j=n/10;
    sum=sum+k;
    f1(j,sum);
    printf("%d,",k);
}
