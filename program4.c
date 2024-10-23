#include<stdio.h>
#include<stdbool.h> 
bool CheckDivisible(int iValue)
{ 
    if((iValue%3==0)&&(iValue%5==0))
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
    int iValue=0;
    bool bRet=false;

    printf("entre a number");
    scanf("%d",&iValue); 
    bRet=CheckDivisible(iValue); 
    if(bRet==true)
{
    printf("%d number is Divisble by 3 and 5",iValue);
} 
else
{
    printf(" %d is not  Divisble by 3 or 5",iValue);
}


    return 0;
}