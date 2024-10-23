//problem Statement: acept the number from user and check the range between 10 and  20, if range is in between 10 & 20 then print yes otherwise print NO.
#include<stdio.h>  
#include<stdbool.h>

bool checkRange(int iNo)
{
    if(iNo>=10 && iNo<=20)
    {
        return true ;
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

    printf("enter a number");
    scanf("%d",&iValue);

    bRet=checkRange(iValue); 

    if(bRet==true)
    {
        printf("%d id range in between 10 and 20",iValue);
    } 
    else
    {
        printf("%d  is not  range 10 AND 20");
    }


    return 0;
}