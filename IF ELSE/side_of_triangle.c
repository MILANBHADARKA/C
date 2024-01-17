#include<stdio.h.>
int main(int argc, char const *argv[])
{
   int a,b,c;
   printf("enter side a : ");
   scanf("%d",&a);
   
   printf("enter side b : ");
   scanf("%d",&b);
   
   printf("enter side c : ");
   scanf("%d",&c);

   if(a+b>c && a+c>b && b+c>a)
   {
        printf("entered value is side of triangle");
        
   }
   else
   {
        printf("entered value is not side of triangle");
   }
   
    return 0;
}
