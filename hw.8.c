#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double pow(double a, double b);// a의 b승을 반환
double sqrt(double x);// 루트 x를 반환

int main(void)
{
    double data[5]={0.};
    double sum; // 합
    double q; // u인지 q인지 
    double m; //평균
    double p;
    int num1;

    
    //5개의 정수 입력받기
    printf("Enter 5 real numbers: ");   
    for(num1=0; num1<5; num1++)
    {
        scanf("%lf", &data[num1]);
    }
    //여기까지 정수 입력받기

    //m
    sum=0.;
    for(num1=0; num1<5; num1++)
        sum+=data[num1];
        m= sum/5.0;

    //q(분산)
    sum=0.;
    for(num1=0; num1<5; num1++)
    sum+= pow((data[num1]-m),2);
    q=sum/5.0;

    //p
    p=sqrt(q);


    printf("Standard Deviation = %.3lf \n", p);
   
   return 0;
}