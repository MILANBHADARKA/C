#include<stdio.h>
int main(int argc, char const *argv[])
 {   int n,ans=0,d;
     int num=0;                                                                                                                                                                                                                                ;
    int i,j;
    printf("armstrong number between 1 to 999 is \n");
    for(i=1;i<999;i++)
    {

        num=i;
        ans=0;

         for(j=1;num>0;j++)
        {
            d=num%10;
            ans=ans+(d*d*d);
            num=num/10;

        }  

        if(ans==i)
        {
            printf("%d\n",i);
        }  
        
    }
return 0;
}


/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,ans=0;
    int d,num;
    printf("enter the value of n : ");
    scanf("%d",&n);
    num=n;
    for(i=0;n>0;i++)
    {
        d=n%10;
        ans=ans+(d*d*d);
        n=n/10;
    }

    if(ans==num)
    {
        printf("this is an armstrong number\n");
    }
    else
    {
        printf("this is not an armstrong number\n");
    }
    return 0;
}*/





