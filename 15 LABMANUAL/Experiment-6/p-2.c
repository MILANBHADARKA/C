#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char s[200];
    int i,m=0,n=0;
    int o=0;
    printf("enter the string\n");
    gets(s);
    
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
            m++;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            s[i]=s[i]-32;
            n++;
        }
        else
        {
            s[i]=s[i];
            o++;
        }
    }

    puts(s);
    printf("%d",m+n+o);


    return 0;
}
