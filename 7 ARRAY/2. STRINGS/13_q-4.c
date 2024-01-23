// convert lower to upper

#include<stdio.h>
#include<ctype.h>
int main(int argc, char const *argv[])
{
    char s1[100];

    printf("enter the string : ");
    gets(s1);
    printf("\n");

    printf("The string is ");
    puts(s1);
    puts("\n");

    int l=0,u=0,s=0,w=0,d=0;
    int i=0;
    
    while(s1[i]!='\0')
    {
        if(s1[i]>='a'&&s1[i]<='z')
        {
            s1[i]=s1[i]-32;
            l++;
        }
        else if(s1[i]>='A'&&s1[i]<='Z')
        {
            s1[i]=s1[i]+32;
            u++;
        }
        else if(s1[i]==' ')
        {
            w++;
        }
        else if(isdigit(s1[i]))
        {
            d++;
        }
        else
        {
            s++;
        }
        i++;
    }
    puts("\n");
    printf("upper case=%d,lowercase=%d,white space=%d,special charater=%d,digit=%d\n",u,l,w,s,d);
    puts("\n");
    printf("The string is ");
    puts(s1);
    

    return 0;
}
