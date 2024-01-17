#include<stdio.h>
#include<string.h>

typedef struct date 
{
    int day;
    int month;
    int year;

}date;

int main(int argc, char const *argv[])
{
    date a,b;
    
    printf("enter day,month,year for a date \n");
    scanf("%d%d%d",&a.day,&a.month,&a.year);
    printf("enter day,month,year for b date \n");
    scanf("%d%d%d",&b.day,&b.month,&b.year);

    //we cannot do if(b==a)

    if(a.day==b.day && a.month==b.month && a.year==b.year)
    {
        printf("date are same\n");
    }
    else
    {
        printf("date are not same\n");
    }

    return 0;
}