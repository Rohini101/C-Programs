#include<stdio.h> 
int MultiDigits(int iNo)
{
    int iDigit=0;
    int iMult=1;
   
    while(iNo>0)
    {
        iDigit=iNo%10;
        iMult=iMult*iDigit; 
        iNo=iNo/10;
 

    } 
    return iMult;
}

int main()
{ 
    int iValue=0; 
    int iRet=0;
    printf("Enter a number");
    scanf("%d",&iValue); 

    iRet=MultiDigits(iValue);
    printf(" multiplication of digits is %d",iRet); 

    return  0;
}