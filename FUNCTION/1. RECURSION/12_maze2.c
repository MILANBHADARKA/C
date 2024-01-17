// IN THIS CODE WE GO END TO START TO CODE SIZE IS REDUCE 
//GO START TO END & END TO START ANSWER IS SAME

#include<stdio.h>
int maze(int r,int c)
{   
    int rightways = 0;
    int downways = 0;
    if(r==1 && c==1)
    return 1;

    if(r==1)                    //now we have only one option to go right.
    rightways += maze(r,c-1);

    if(c==1)                   //now we have only one option to go down.
    downways += maze(r-1,c);

    if(r>1 && c>1)              //we have two option that go down and go right.
    {
        rightways += maze(r,c-1);
        downways += maze(r-1,c);
    }

    int totalways = rightways + downways;

    return totalways;
}
int main(int argc, char const *argv[])
{
    int r,c;

    printf("enter the rows : ");
    scanf("%d",&r);
    
    printf("enter the coloum : ");
    scanf("%d",&c);

    int totalways = maze(r,c);

    printf("totalways = %d",totalways);

    return 0;
}
