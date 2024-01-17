#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    char n;
    int answer;

    printf("enter integer value of a&b:");
    scanf("%d %d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    abc:
    printf("enter '+' for addition '-' for subtrction '/' f9ior division '*' for multiplication '%%' for modulo\n");
    scanf(" %c",&n);

    switch(n)
    {
        case ('+'):
        answer=a+b;
        break;

        case ('-'):
        answer=a-b;
        break;

        case ('/'):
        answer=a/b;
        break;

        case ('*'):
        answer=a*b;
        break;

        case ('%'):
        answer=a%b;
        break;

        default:
        printf("wrong operator\n");
        goto abc;
    }

    printf("answer=%d",answer);

    return 0;

}
