#include <stdio.h>
// printf even number with continue statement
int main(int argc, char const *argv[])
{
    int i;

    for(i=1;i<=100;i++)
    {
        if(i%2!=0)
        {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}

// printf odd number with continue statement
/*int main(int argc, char const *argv[])
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}*/





