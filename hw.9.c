#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void upper_lower(char str[])
{
    int i;
    for(i=0; str[i] != 0; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
        str[i]-= 'a'-'A';
        }   

        else if( str[i]>='A' && str[i]<='Z')
        {
        str[i] += 'a'-'A';
        }
    }
}


int main(void)
{
    char str[100];
    printf("Input> ");

    scanf("%[^\n]", str);
    upper_lower(str);

    printf("Output> %s \n",str);

    return 0;

}