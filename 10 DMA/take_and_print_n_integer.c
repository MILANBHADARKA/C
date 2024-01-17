#include<stdio.h>
#include<stdlib.h>   //this header file is use for malloc,calloc e.t.c

int main(int argc, char const *argv[])
{
    int n;
    printf("enter number of integers you want : ");
    scanf("%d",&n);

    //int *ptr = (int*) malloc(n*sizeof(int));  //that means this allocate n*4 byte memory in computer
    int *ptr = (int*) calloc(n,sizeof(int));
    int *p=ptr;

    printf("eneter the integers \n");
    for(int i=0;i<n;i++,p++)
    {
        scanf("%d",p+i);
    }

    p=ptr;  //this is important because we cahge value of p in for loop.
    for(int i=0;i<n;i++,p++)
    {
        printf("%d\n",*(p+i));
    }

    return 0;
}
