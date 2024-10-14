#include<stdio.h> 
#define PI 3.14

double CircleArea(float fRadius)
{ 
    double area=0.0;
    area=PI*fRadius*fRadius;
    return area;

}

int main()
{
    float fValue=0.0;
    double dRet=0.0;  
    printf("enter radius");
    scanf("%f",&fValue);
    dRet=CircleArea(fValue);
    printf("%f",dRet);

    return 0;
}