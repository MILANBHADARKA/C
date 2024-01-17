/*
what is permutation?
ans:
permutation means nPr.(in 12th maths)
now,
           n!
nPr =  ----------
         (n-r)!
*/


//permutation without function

/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n,r;

    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("enter the value of r : ");
    scanf("%d",&r);

    int nfact=1;
    int nrfact=1;

    for(i=1;i<=n;i++)
    {
        nfact = nfact * i;
    }
    for(i=1;i<=(n-r);i++)
    {
        nrfact = nrfact * i;
    }

    int nPr = nfact / nrfact;

    printf("nPr=%d",nPr);
    return 0;
}*/


// permutation with function

#include<stdio.h>
int fact(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int permutation(int n,int r)
{
    int nPr = fact(n) / fact(n-r);
    return nPr;
}
int main(int argc, char const *argv[])
{
    int n,r;

    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("enter the value of r : ");
    scanf("%d",&r);

    printf("nPr=%d",permutation(n,r));
    return 0;
}

