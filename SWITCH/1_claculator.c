/*

switch statement is alternate of else if statement

syntex:
switch(integral expression)
{
    case constant1:
        do this;
        break;
    case constant2:
        do this
        break;
        .
        .
        .
        .

    default:
        do this;
}
*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;

    printf("enter the value pf a & b \n");
    scanf("%d",&a);
    scanf("%d",&b);

    char c;
    printf("eneter expression what do you want to perform : ");
    scanf(" %c",&c);

    switch(c)
    {
        case '+':
        printf("a+b=%d",a+b);
        break;

        case '-':
        printf("a-b=%d",a-b);
        break;

        case '/':
        printf("a/b=%f",a/b);
        break;

        case '*':
        printf("a*b=%d",a*b);
        break;

        default :
        printf("enter valid expression");
    }
    return 0;
}