// #include<stdio.h>
// void print(int x,int n)
// {
//     if(x>n)
//     return;

//     printf("%d\n",x);
//     print(x+1,n);
//     return;
// }
// int main(int argc, char const *argv[])
// {
//     int n;

//     printf("enter the value of n : ");
//     scanf("%d",&n);

    

//     print(1,n);
//     return 0;
// }


                                             // OR
                                             //IMP


#include<stdio.h>
int print(int n)
{  
    if(n==0)
    return 0;

    
    print(n-1);                                       //dry run for understading
    printf("%d\n",n);
   
    return 0;

}
int main(int argc, char const *argv[])
{
    int n;

    printf("enter the positive value of n : ");
    scanf("%d",&n);

    print(n);
    return 0;
}


