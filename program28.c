#include<stdio.h>

int evenDisplay(int iNo)
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
        if(iDigit%2==0){
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

   iRet= evenDisplay(iValue); 
   printf(" count of even numbers %d",iRet);

    return 0;
}