#include<stdio.h>

int evenDisplay(int iNo)
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
        if(iDigit%2==0){
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

    evenDisplay(iValue);

    return 0;
}