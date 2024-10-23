#include<stdio.h> 
#include<string.h> 
#include<stdbool.h>

bool CheckOccurance(char *str)
{
  
 bool bFlag=false;

    while(*str != '\0')
    {  
        if(*str=='w')
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
     bool bRet=false;
    printf("enter a string ");
    scanf("%[^'\n']s",Arr);
    bRet=CheckOccurance(Arr); 
    if(bRet==true) 
    {

    printf(" w is prsent in the string"); 
     } 
     else 
     {
        printf("w is not present in the sting");
     }

    return 0; 
}