#include<stdio.h> 
#include<stdbool.h>

bool CheckDigit(char ch)
{ 
 if(ch>='0' && ch<='9') 
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
    char cValue='\0'; 
    bool bRet=false;
    scanf("%c",&cValue); 

    bRet=CheckDigit(cValue);
    if(bRet==true)
    { 
        printf("Digit");

    }
    else 
    {
    printf("NOT a digit");
    }
  

    return 0;
}