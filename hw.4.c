#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int i, j;
    int c=0;

    printf("Please enter a number.");
    scanf("%d", &i);

    for(j=1; j<=i;j++)
    {
        if (i%j == 0)
        {
            c=c+1;
        }
    }

    if(c==2)
    {
        printf("It is prime number. \n");
    }
    else
        printf("It is not a prime number. \n");

    return 0;
}
