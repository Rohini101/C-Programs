#include<stdio.h>

int count(int iNo)
{
    int iDigit=0; 
    iDigit=0; 
    if(iNo < 0)
    {
        iNo= -iNo;
    } 
    int iCount=0;

    while(iNo!=0)
    {
        iDigit=iNo%10; 
        if(iDigit  > 5){
        // printf("%d \t ",iDigit); 
        iCount++;
        }

        iNo=iNo/10;

    } 
    return iCount;
 

    
}


int main()
{ 
    int iValue=0; 
    int iRet=0;
    printf("Enter a number");
    scanf("%d",&iValue);

   iRet=count(iValue); 
   printf(" count  numbers greater than 3 is  %d",iRet);

    return 0;
}