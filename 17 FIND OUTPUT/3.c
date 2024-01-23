#include<stdio.h>
int main(int argc, char const *argv[])
{
    enum month{a,b,v=-1,c,t=2,k,s};
    printf("%d-%d+%d*%d+%d\n",a-b,c,b/t,k,s);

    enum day{monday,tuesday,wednesday,thrusday,friday,saturday,sunday};
    enum day week_st,week_end;
    week_st=wednesday;
    week_end=monday;
    

    printf("%d\t",week_st);
    printf("%d",week_end);

    return 0;
}
