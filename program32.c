#include<stdio.h>  
int MultiDiff(int iNo)
{
    int iDigit=0;
    int iMult1=1;
    int iMult2=1; 
    int Diff=0;

    while(iNo !=0)
    {
        iDigit=iNo%10;
        if(iDigit%2==0)
        {
            iMult1=iMult1*iDigit;
        } 
        else
        { 
            iMult2=iMult2*iDigit;

        } 
        iNo=iNo/10;
    } 
    Diff=iMult1-iMult2; 

    return Diff;
}

int main()
{ 
    int iValue=0; 
    int iRet=0;
    printf("Enter a number");
    scanf("%d",&iValue);   
    iRet=MultiDiff(iValue);
    printf(" diffrence between Multiplication of even  digits and odd digits is %d",iRet);

    return 0;
}
