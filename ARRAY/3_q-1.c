//take student marks and print roll number of student who got marks less than 35.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;
    int s[50];

    printf("how many student (under 50)? : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter %dth student marks out of 100 : ",i+1);
        scanf("%d",&s[i]);
    }
    printf("roll number of marks less than 35 : \n");
    for(i=0;i<n;i++)
    {   
        if(s[i]<35)
        {
            printf("%d\n",i+1);
        }
    }
    return 0;
}
