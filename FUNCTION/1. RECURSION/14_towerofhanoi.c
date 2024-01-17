#include<stdio.h>
void tower(int n,char s,char h,char d)  //s=source  h=helper   d=destination 
{   
    if(n==0)
    {
        return;
    }
    tower(n-1,s,d,h);
    printf("%c->%c\n",s,d);
    tower(n-1,h,s,d);
    return;
}

int main(int argc, char const *argv[])
{
    int n;

    printf("enter the value of n : ");
    scanf("%d",&n);

    tower(n,'a','b','c');

    return 0;
}
