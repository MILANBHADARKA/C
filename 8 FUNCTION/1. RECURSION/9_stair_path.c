// we have 2 choice that we go for one step and two step.

// #include<stdio.h>
// int stair(int n)
// {
//     if(n==0 || n==1|| n==2)
//     return n;

//     int totalways=stair(n-1)+stair(n-2);
//     return totalways;
// }
// int main(int argc, char const *argv[])
// {
//     int n;

//     printf("enter the vaue of n :");
//     scanf("%d",&n);
//     int ways = stair(n);

//     printf("ways=%d",ways);
//     return 0;
// }


//if we have three choice thet we go for one step, two step and three step then.....

#include<stdio.h>
int stair(int n)
{
    if(n==0 || n==1|| n==2)
    return n;
    if(n==3)
    return n+1;

    int totalways=stair(n-1)+stair(n-2)+stair(n-3);
    return totalways;
}
int main(int argc, char const *argv[])
{
    int n;

    printf("enter the vaue of n :");
    scanf("%d",&n);
    int ways = stair(n);

    printf("ways=%d",ways);
    return 0;
}