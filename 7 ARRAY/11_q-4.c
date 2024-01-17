//find the difference between the sum of element at even indices to the sum of element at odd indices.


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the element of array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    int sumo=0;
    int sume=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sume+=a[i];
        }
        else
        {
            sumo+=a[i];
        }
    }
    int diff;
    if(sumo>sume)
    diff=sumo-sume;
    else
    diff=sume-sumo;

    printf("difference=%d",diff);
    return 0;
}
