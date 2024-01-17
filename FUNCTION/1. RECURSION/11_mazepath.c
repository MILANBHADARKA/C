// for simple solution of maze path goto maze2.c




#include<stdio.h>
int maze(int cr,int cc,int er,int ec)   // cr=current row   cc=current coloum   er=ending row   ec=ending coloum
{   
    int rightways=0;
    int downways=0;

    if(cr==er && cc==ec)
    return 1;

    if(cr==er)                        //now only we have 1 option that only goto right
    rightways += maze(cr,cc+1,er,ec);

    if(cc==ec)                          //now only we have 1 option that only goto down
    downways += maze(cr+1,cc,er,ec);

    if(cr<er && cc<ec)                 //we have 2 option that only goto right and down
    {
        rightways += maze(cr,cc+1,er,ec);
        downways += maze(cr+1,cc,er,ec);
    }


    int totalways=rightways+downways;

    return totalways;
}
int main(int argc, char const *argv[])
{   
    int r,c;

    printf("enter the rows : ");
    scanf("%d",&r);

    printf("enter the coloums : ");
    scanf("%d",&c);

    int totalways = maze(1,1,r,c);

    printf("totalways = %d",totalways);


    return 0;
}
