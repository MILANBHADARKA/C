/*what is hcf/gcd/gusah?

ex.,
a=24 and b=60;

24-->1,2,3,4,6,8,12,24
                 --
60-->1,2,3,4,5,6,10,12,15,20,30,60
                    --
so
gcd of a and b is 12

*/

#include<stdio.h>
int min(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int gcd(int a,int b)
{
    int i,hcf;
    for(i=1;i<=min(a,b);i++)   // because max value of gcd is min of a&b.                //for(i=min(a,b);i>=1;i--)   
    {                                                                                    //{ 
        if(a%i==0 && b%i==0)                                                  //OR      //  if(a%i==0 && b%i==0){
        {                                                                               // hcf=i;
            hcf=i;                                                                      //break;}
        }                                                                              //}
                                  
    }
     printf("gcd/hcf/gusah of %d and %d is %d",a,b,hcf);
}
int main(int argc, char const *argv[])
{
    int a,b;

    printf("enter the value of a : ");
    scanf("%d",&a);

    
    printf("enter the value of b : ");
    scanf("%d",&b);

    gcd(a,b);
    return 0;
}


