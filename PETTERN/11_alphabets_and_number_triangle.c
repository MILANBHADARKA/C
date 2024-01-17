#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, n, c;

    printf("enter the value of n : ");
    scanf("%d", &n);

   

    for (i = 1; i <= n; i++)
    {
        c = 65;
        int h = 1;
        
        for (j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%d",h);
                h++;  
            }
            else
            {

                printf("%c",c);
                c++;
            }
        }
        printf("\n");
    }
    return 0;
}
