#include<stdio.h> 

int Factorial(int iNo)
{
    int fact=1;
    for(int i=iNo;i>=1;i--)
    {
        fact=fact*i;
    } 

    return fact;
}



int main()
{ 
    int iValue=0;
    int iRet=0;

    printf(" enter number ");
    scanf("%d",&iValue);

    iRet=Factorial(iValue); 
    printf("facrotial is %d",iRet); 


    return 0;
}