#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int ary[5];
    int numodd,numeven;
    printf("5개의 정수를 입력: ");

    for (int i=0; i<5; i++)
    {scanf("%d",&ary[i]);
        if(ary[i]%2!=0)
            numodd=ary[i];
            
        else if(ary[i]%2==0)
            numeven=ary[i];
        }
    
    printf("홀수: %d \n 짝수: %d \n", numodd, numeven);
return 0;
    
  }
