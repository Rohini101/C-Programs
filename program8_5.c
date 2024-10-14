// 1 Sqaure feet=0.0929 

#include<stdio.h>
double SquareToMeter(int iNo)
{
    double Meter=0.0;
    Meter=(double)iNo*0.0929;
    return Meter;
}



int main()
{   
    int iValue=0;
    double dRet=0.0;

    printf("enter a square");
    scanf("%d",&iValue);
    dRet=SquareToMeter(iValue); 
    printf(" %d square to meter is equal to %f",iValue,dRet);


    return 0;
}