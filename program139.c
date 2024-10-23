#include<stdio.h> 
#include<stdbool.h>

bool CheckCapital(char ch)
{ 
 if(ch>='A' && ch<='Z') 
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

    bRet=CheckCapital(cValue);
    if(bRet==true)
    { 
        printf("capital letter");

    }
    else 
    {
    printf("NOT a capital letter");
    }
  

    return 0;
}