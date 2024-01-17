#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int ans;
    int i,a=1,b=1;

    printf("enter how many element you want to see in fibonacci series : ");
    scanf("%d",&n);


   
  

    

    for(i=1;i<=n;i++)
    {
        printf("the %dth fibonacci number is %d\n",i,a);
        ans=a+b;
        a=b;
        b=ans;

    }
    return 0;
}

/*#include<stdio.h>

int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}*/

