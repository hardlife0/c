#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void TwoJ(int numver)
{
    if (numver>1)
        TwoJ(numver/2);
    printf("%d", numver%2);
}

int main(void)
{
    int unsigned num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    TwoJ(num);
}



