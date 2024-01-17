#include<stdio.h>
void printstar(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
       printf("%c",'*');
    }
    
}
int sum(int a,int b);
int takenumber();
int main(int argc, char const *argv[])
{
    int a,b,c;
    a=9;
    b=90;
    /*c=sum(a,b);
    printf("the sum is %d\n",c);*/
    //printstar(7);
    c=takenumber();
    printf("entered numer is %d",c);
    return 0;
}

int sum(int a,int b)
{
    return a+b;
}

int takenumber()
{
    int i;
    printf("enter a number : ");
    scanf("%d",&i);
    return i;
}