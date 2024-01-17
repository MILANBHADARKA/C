/*
what is combination?
ans:
combination means nCr.(in 12th maths)
now,
           n!
nCr =  ----------
        r!*(n-r)!
*/


//combination without function


/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,r,nCr,i;
    printf("enter the value n : ");
    scanf("%d",&n);
    printf("enter the value r : ");
    scanf("%d",&r);
    
    int nfact=1;
    int rfact=1;
    int nrfact=1;

    for(i=1;i<=n;i++)   //n!
    {
        nfact=nfact*i;
    }
    for(i=1;i<=r;i++)   //r!
    {
        rfact=rfact*i;
    }
    for(i=1;i<=n-r;i++)   //n-r!
    {
        nrfact=nrfact*i;
    }

    nCr = nfact / ( rfact*nrfact );

    printf("nCr=%d",nCr);
    return 0;
}*/


// combination with function


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
int combination(int n,int r)
{
    int nCr = fact(n) / ( fact(r) * fact(n-r) );
    return nCr;
}

int main(int argc, char const *argv[])
{
    int n,r;

    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("enter the value of r : ");
    scanf("%d",&r);

    

    printf("nCr=%d",combination(n,r));
    return 0;
}
