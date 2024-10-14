// 1km=1000m

#include<stdio.h> 
#define METER 1000

int KmToMeter(int iNo)
{
    int Ans=0;
     Ans=iNo*METER; 
     return Ans;

}


int main()
{ 
    int iValue=0;
    int iRet=0; 

    printf("enter a km");
    scanf("%d",&iValue);

    iRet=KmToMeter(iValue);
    printf("%d km is equal to %d",iValue,iRet);




    return 0;
}