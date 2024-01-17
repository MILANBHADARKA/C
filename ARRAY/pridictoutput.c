#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[20];
    int i;

    for(i=0;i<18;i++);
    {
         a[i]=i;
         printf("\n%d",a[i]);
    }
    return 0;
}
