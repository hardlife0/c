#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int ary[5],o[10],e[10];
int numodd,numeven;
    printf("5개의 정수를 입력: ");
    for (int i=0; i<5; i++)
    {scanf("%d",&ary[i]);
    
    if(ary[i]%2 ==0)
    ary[i]=e[10];
    else
    ary[i]=o[10];
    }
    
numodd=sizeof(o)/sizeof(int);
numeven=sizeof(e)/sizeof(int);

for(int j=0; j<numodd; j++)
    printf("odd num: %d", numodd);
for(int j=0; j<numeven; j++)
    printf("even num: %d", numeven);

    return 0;
}
