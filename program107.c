#include<stdio.h> 
#include<string.h> 
#include<stdbool.h>

bool CheckOccurance(char *str,char ch)
{
  
 bool bFlag=false;

    while(*str != '\0')
    {  
        if(*str==ch)
        {
        bFlag=true;
        break;
        }
        
        str++;
    }
     
     return bFlag;
}

int main()
{ 
    char Arr[100];  
    char cValue='\0';
     bool bRet=false;
    printf("enter a string ");
    scanf("%[^'\n']s",Arr); 

    printf("enter a character that u want to serach ");
    scanf(" %c",&cValue);

    bRet=CheckOccurance(Arr,cValue); 
    if(bRet==true) 
    {

    printf("char is prsent in the string"); 
     } 
     else 
     {
        printf("char is not present in the sting");
     }

    return 0; 
}