//see the full code and its output for full understing

#include<stdio.h>
int main(int argc, char const *argv[])
{
    char str[] = "Milan";
    char *ptr=str;   // OR //   char *ptr=&str[0];
    printf("\n");
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    ptr=str;


    //MOST MOST IMP
    //with char pointer we can change single char in string variable but we cannot change whole string at atime with using of pointer like below BUT THIS NOT CHANGE VALUE OF ANY CHAR VARIABLE TO UNDERSTAN SHOW BELOW CODE.
    //and in normal char string variable we cannot change whole string but we can change one char at one time.
    //ex.,
    
   

    

    printf("\n");

    ptr="Bhadarka";

    while(*ptr!='\0')
    {
        printf("%c",*ptr);     //PRINT ptr
        ptr++;
    }
    
    printf("\n");


    int i=0;
     while(str[i]!='\0')
    {
        printf("%c",str[i]);     //PRINT str
        i++;
    }
    //in out put we show that ptr="Bhadarka";this was not chage value of str 
    printf("\n");

    //if we do
    ptr=str;

    *ptr='B';                     //change char with use of pointer
    printf("\n");
    i=0;
     while(str[i]!='\0')
    {
        printf("%c",str[i]);     //PRINT str
        i++;
    }


    return 0;
}
