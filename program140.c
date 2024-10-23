#include<stdio.h> 
#include<stdbool.h>

bool CheckSmall(char ch)
{ 
 if(ch>='a' && ch<='z') 
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

    bRet=CheckSmall(cValue);
    if(bRet==true)
    { 
        printf("Small letter");

    }
    else 
    {
    printf("NOT a small letter");
    }
  

    return 0;
}