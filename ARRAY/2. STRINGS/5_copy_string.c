#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char s1[100];
    char s2[100];
    int i;
    printf("enter the string");
    gets(s1);

    // for(i=0;s1[i]!='\0';i++)
    // {
    //     s2[i]=s1[i];
    // }
    // s2[i]='\0';                 //this line is vary important. 


    strcpy(s2,s1);       //copy s1 string in s2 string.

    printf("s2 is \n");
    puts(s2);
    return 0;
}
