// for clearing all concept of recursion do dry run for understanding rucursion.

#include<stdio.h>

void preinpost(n)
{
    if(n==0)
    return;

    printf("pre %d\n",n);
    preinpost(n-1);
    printf("in %d\n",n);
    preinpost(n-1);
    printf("post %d\n",n);

    return;
}
int main(int argc, char const *argv[])
{
    int n;

    printf("enter the number : ");
    scanf("%d",&n);

    preinpost(n);

    return 0;
}



// #include<stdio.h>

// void zigzag(n)
// {
//     if(n==0)
//     return;

//     printf("%d ",n);
//     zigzag(n-1);
//     printf("%d ",n);
//     zigzag(n-1);
//     printf("%d ",n);

//     return;
// }
// int main(int argc, char const *argv[])
// {
//     int n;

//     printf("enter the number : ");
//     scanf("%d",&n);

//     zigzag(n);

//     return 0;
// }
