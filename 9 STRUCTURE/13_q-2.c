/*
you manage a travel agency and you want your n drivers to input their following detail:
1.name
2.driving license no..
3.rout
4.kms
your program should be able to take n as input and your drivers will start inputting their detail one by one.

print all detail.
*/

#include<stdio.h>
#include<string.h>



typedef struct driverinfo
{
    char name[100];
    long int license;
    char from[100];
    char to[100];
    int kms;
}driverinfo;

void sort(driverinfo driver[],int n,driverinfo temp)
{
    int i,j;
    
    for(i=0;i<n-1;i++)
    {
        if(strcmp(driver[i].name,driver[i+1].name)>0)
        {
            temp=driver[i];
            driver[i]=driver[i+1];
            driver[i+1]=temp;
        }
    }

}

int main(int argc, char const *argv[])
{
    int n;
    printf("how many driver : ");
    scanf("%d",&n);

    driverinfo driver[n],temp;

    // printf("enter information line by line 1name,2licenseno,3rout(from->to),4kms : \n");

    int i;
    for(i=0;i<n;i++)
    {   
        printf("name : ");
        scanf("%s",&driver[i].name);
        printf("license no : ");
        scanf("%d",&driver[i].license);
        printf("rout from : ");
        scanf("%s",&driver[i].from);
        printf("rout to : ");
        scanf("%s",&driver[i].to);
        printf("km : ");
        scanf("%d",&driver[i].kms);
    }

    printf("\n\n");

    

    sort(driver,n,temp);



    for(i=0;i<n;i++)
    {
        printf("driver %d\n",i+1);
        printf("---------------------------------------------------------------\n");
        printf("name : %s\n",driver[i].name);
        printf("license no : %ld\n",driver[i].license);
        printf("rout : %s->%s\n",driver[i].from,driver[i].to);
        printf("kms : %d",driver[i].kms);
        printf("\n---------------------------------------------------------------\n\n");
    }

    return 0;
}
