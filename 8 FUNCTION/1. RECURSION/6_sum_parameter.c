// 1+2+3+4+5=15

#include<stdio.h>
int answer(int a)                                                        
{  

    if(a==0)
    return 0;

    return a+answer(a-1);
}
int main(int argc, char const *argv[])
{
    int n;
    int sum;
    printf("enter the value of n : ");
    scanf("%d",&n);

    sum = answer(n);
    printf("%d",sum);
    return 0;
}



