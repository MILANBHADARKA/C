#include<stdio.h>
int main(int argc, char const *argv[])
{
    int length,width,a,p;

    printf("enter the length of rectangle : ");
    scanf("%d",&length);
    printf("enter the width of rectangle : ");
    scanf("%d",&width);

    a=length*width;
    p=2*(length+width);

    if (a>p)        
    {
        printf("the value of area is high");
    }
    else
    {
        printf("the value of area is low");
    }
    
    



    return 0;
}
