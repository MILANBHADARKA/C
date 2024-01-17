#include<stdio.h>
int powe(int a,int b)
{
    if(b==0)
    return 1;

    return a*powe(a,b-1);
}
int main(int argc, char const *argv[])
{
    int a,b;

    printf("enter the value of base : ");
    scanf("%d",&a);

    
    printf("enter the value of powe : ");
    scanf("%d",&b);

    int power = powe(a,b);

    printf("a^b=%d",power);
    return 0;
}
