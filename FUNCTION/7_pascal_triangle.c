//      j  0 1 2 3 4 5
//  i
//  
//  0      1                                        /*now the rule of pascal triangle is any element of triangle is always iCj.
//  1      1 1                                        so in code we start i and j from 0.
//  2      1 2 1                                      if we start i and j from 1 then pattern is
//  3      1 3 3 1                                                              1
//  4      1 4 6 4 1                                                            2 1
//  5      1 5 10 10 5 1                                                        3 3 1
//                                                                              4 6 4 1
//n=5                                                                           5 10 10 5 1*/

#include<stdio.h>
int fact(int a)
{
    int fact = 1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int combination(int n,int r)
{
    int nCr = fact(n) / ( fact(r) * fact(n-r) );

    return nCr;
}

int main(int argc, char const *argv[])
{
    int i,j,a,n,r;

    printf("enter the value of a : ");
    scanf("%d",&a);

    for(i=0;i<=a;i++)                                               // i=0 because rule of pascal triangle
    {
                                                                             
        for(j=0;j<=i;j++)
        {   
            
            n=i;
            r=j;
            int nCr = combination(n,r);
            printf("%d ",nCr);
        }
        printf("\n");
    }
    return 0;
}


/* for 
    1 
   2 1 
  3 3 1 
 4 6 4 1 
5 10 10 5 1
n=5
this pattern
we need to add extra for loop in for loop of i for spaces like this
for(k=1;k<=a-i;k++)
{
    printf(" ");
}
*/