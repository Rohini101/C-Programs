#include<stdio.h>

int OddDisplay(int iNo)
{
    int iDigit=0; 
    iDigit=0; 
    if(iNo < 0)
    {
        iNo= -iNo;
    }

    while(iNo!=0)
    {
        iDigit=iNo%10; 
        if(iDigit%2!=0){
        printf("%d \t ",iDigit); 
        }

        iNo=iNo/10;

    } 
 

    
}


int main()
{ 
    int iValue=0;
    printf("Enter a number");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}