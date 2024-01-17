//see full code and output for understanding

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=2;

    int *x=&a;

    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%u\n",&a);
    printf("%u\n",x);

    x++;
    printf("\n after x++ \n");
    printf("%u\n",x);

    //in output we can saw that if we do x++ or x+1 then than output is x + sizeof(int)*1.
    x-=2;
    printf("\n\after x-2\n");
    printf("%u\n",x);

    //in output we can saw that if we do x-2 then than output is x - sizeof(int)*2.
    return 0;
}
