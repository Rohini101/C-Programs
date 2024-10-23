#include<stdio.h> 
#include<stdbool.h>
bool CheckEvenOdd(unsigned int iValue)
{
    if(iValue%2==0)
    {
        return true;
    } 
    else 
    {
        return false;
    }
}



int main()
{

unsigned int iValue=0;
bool bRet=false;
printf("entre a number");
scanf("%d",&iValue);
bRet=CheckEvenOdd(iValue);

if(bRet==true)
{
    printf("%d number is even",iValue);
} 
else
{
    printf("%Given number is odd",iValue);
}
return 0;
}